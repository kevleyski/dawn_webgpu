// Copyright 2021 The Dawn & Tint Authors
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this
//    list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its
//    contributors may be used to endorse or promote products derived from
//    this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include "src/dawn/node/binding/GPURenderBundleEncoder.h"

#include <utility>

#include "src/dawn/node/binding/Converter.h"
#include "src/dawn/node/binding/GPUBindGroup.h"
#include "src/dawn/node/binding/GPUBuffer.h"
#include "src/dawn/node/binding/GPURenderBundle.h"
#include "src/dawn/node/binding/GPURenderPipeline.h"

namespace wgpu::binding {

////////////////////////////////////////////////////////////////////////////////
// wgpu::bindings::GPURenderBundleEncoder
////////////////////////////////////////////////////////////////////////////////
GPURenderBundleEncoder::GPURenderBundleEncoder(const RenderBundleEncoderDescriptor& desc,
                                               wgpu::RenderBundleEncoder enc)
    : enc_(std::move(enc)), label_(CopyLabel(desc.label)) {}

interop::Interface<interop::GPURenderBundle> GPURenderBundleEncoder::finish(
    Napi::Env env,
    interop::GPURenderBundleDescriptor descriptor) {
    wgpu::RenderBundleDescriptor desc{};
    Converter conv(env);
    if (!conv(desc.label, descriptor.label)) {
        return {};
    }

    return interop::GPURenderBundle::Create<GPURenderBundle>(env, desc, enc_.Finish(&desc));
}

void GPURenderBundleEncoder::setBindGroup(
    Napi::Env env,
    interop::GPUIndex32 index,
    std::optional<interop::Interface<interop::GPUBindGroup>> bindGroup,
    std::vector<interop::GPUBufferDynamicOffset> dynamicOffsets) {
    Converter conv(env);

    wgpu::BindGroup bg{};
    uint32_t* offsets = nullptr;
    size_t num_offsets = 0;
    if (!conv(bg, bindGroup) || !conv(offsets, num_offsets, dynamicOffsets)) {
        return;
    }

    enc_.SetBindGroup(index, bg, num_offsets, offsets);
}

void GPURenderBundleEncoder::setBindGroup(
    Napi::Env env,
    interop::GPUIndex32 index,
    std::optional<interop::Interface<interop::GPUBindGroup>> bindGroup,
    interop::Uint32Array dynamicOffsetsData,
    interop::GPUSize64 dynamicOffsetsDataStart,
    interop::GPUSize32 dynamicOffsetsDataLength) {
    Converter conv(env);

    wgpu::BindGroup bg{};
    if (!conv(bg, bindGroup)) {
        return;
    }

    enc_.SetBindGroup(index, bg, dynamicOffsetsDataLength,
                      dynamicOffsetsData.Data() + dynamicOffsetsDataStart);
}

void GPURenderBundleEncoder::pushDebugGroup(Napi::Env, std::string groupLabel) {
    enc_.PushDebugGroup(groupLabel.c_str());
}

void GPURenderBundleEncoder::popDebugGroup(Napi::Env) {
    enc_.PopDebugGroup();
}

void GPURenderBundleEncoder::insertDebugMarker(Napi::Env, std::string markerLabel) {
    enc_.InsertDebugMarker(markerLabel.c_str());
}

void GPURenderBundleEncoder::setPipeline(Napi::Env env,
                                         interop::Interface<interop::GPURenderPipeline> pipeline) {
    Converter conv(env);

    wgpu::RenderPipeline p{};
    if (!conv(p, pipeline)) {
        return;
    }

    enc_.SetPipeline(p);
}

void GPURenderBundleEncoder::setIndexBuffer(Napi::Env env,
                                            interop::Interface<interop::GPUBuffer> buffer,
                                            interop::GPUIndexFormat indexFormat,
                                            interop::GPUSize64 offset,
                                            std::optional<interop::GPUSize64> size) {
    Converter conv(env);

    wgpu::Buffer b{};
    wgpu::IndexFormat f{};
    uint64_t o = 0;
    uint64_t s = wgpu::kWholeSize;
    if (!conv(b, buffer) ||       //
        !conv(f, indexFormat) ||  //
        !conv(o, offset) ||       //
        !conv(s, size)) {
        return;
    }

    enc_.SetIndexBuffer(b, f, o, s);
}

void GPURenderBundleEncoder::setVertexBuffer(
    Napi::Env env,
    interop::GPUIndex32 slot,
    std::optional<interop::Interface<interop::GPUBuffer>> buffer,
    interop::GPUSize64 offset,
    std::optional<interop::GPUSize64> size) {
    Converter conv(env);

    wgpu::Buffer b{};
    uint64_t s = wgpu::kWholeSize;
    if (!conv(b, buffer) || !conv(s, size)) {
        return;
    }
    enc_.SetVertexBuffer(slot, b, offset, s);
}

void GPURenderBundleEncoder::draw(Napi::Env env,
                                  interop::GPUSize32 vertexCount,
                                  interop::GPUSize32 instanceCount,
                                  interop::GPUSize32 firstVertex,
                                  interop::GPUSize32 firstInstance) {
    enc_.Draw(vertexCount, instanceCount, firstVertex, firstInstance);
}

void GPURenderBundleEncoder::drawIndexed(Napi::Env env,
                                         interop::GPUSize32 indexCount,
                                         interop::GPUSize32 instanceCount,
                                         interop::GPUSize32 firstIndex,
                                         interop::GPUSignedOffset32 baseVertex,
                                         interop::GPUSize32 firstInstance) {
    enc_.DrawIndexed(indexCount, instanceCount, firstIndex, baseVertex, firstInstance);
}

void GPURenderBundleEncoder::drawIndirect(Napi::Env env,
                                          interop::Interface<interop::GPUBuffer> indirectBuffer,
                                          interop::GPUSize64 indirectOffset) {
    Converter conv(env);

    wgpu::Buffer b{};
    uint64_t o = 0;

    if (!conv(b, indirectBuffer) ||  //
        !conv(o, indirectOffset)) {
        return;
    }
    enc_.DrawIndirect(b, o);
}

void GPURenderBundleEncoder::drawIndexedIndirect(
    Napi::Env env,
    interop::Interface<interop::GPUBuffer> indirectBuffer,
    interop::GPUSize64 indirectOffset) {
    Converter conv(env);

    wgpu::Buffer b{};
    uint64_t o = 0;

    if (!conv(b, indirectBuffer) ||  //
        !conv(o, indirectOffset)) {
        return;
    }
    enc_.DrawIndexedIndirect(b, o);
}

std::string GPURenderBundleEncoder::getLabel(Napi::Env) {
    return label_;
}

void GPURenderBundleEncoder::setLabel(Napi::Env, std::string value) {
    enc_.SetLabel(std::string_view(value));
    label_ = value;
}

}  // namespace wgpu::binding
