// Copyright 2024 The Dawn & Tint Authors
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

#include "src/tint/lang/hlsl/type/byte_address_buffer.h"

#include <cstddef>
#include <string>

#include "src/tint/lang/core/type/clone_context.h"
#include "src/tint/lang/core/type/manager.h"
#include "src/tint/lang/core/type/unique_node.h"
#include "src/tint/utils/math/hash.h"
#include "src/tint/utils/rtti/castable.h"

TINT_INSTANTIATE_TYPEINFO(tint::hlsl::type::ByteAddressBuffer);

namespace tint::hlsl::type {

ByteAddressBuffer::ByteAddressBuffer(core::Access access)
    : Base(static_cast<size_t>(Hash(tint::TypeCode::Of<ByteAddressBuffer>().bits)),
           core::AddressSpace::kStorage,
           nullptr,
           access) {}

bool ByteAddressBuffer::Equals(const UniqueNode& other) const {
    if (auto* o = other.As<ByteAddressBuffer>()) {
        return o->Access() == Access();
    }
    return false;
}

std::string ByteAddressBuffer::FriendlyName() const {
    StringStream out;
    out << "hlsl.byte_address_buffer<" << Access() << ">";
    return out.str();
}

ByteAddressBuffer* ByteAddressBuffer::Clone(core::type::CloneContext& ctx) const {
    return ctx.dst.mgr->Get<ByteAddressBuffer>(Access());
}

}  // namespace tint::hlsl::type
