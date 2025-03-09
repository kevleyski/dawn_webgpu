// Copyright 2023 The Dawn & Tint Authors
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

#include "src/tint/lang/core/ir/exit_switch.h"

#include <utility>

#include "src/tint/lang/core/ir/clone_context.h"
#include "src/tint/lang/core/ir/module.h"
#include "src/tint/lang/core/ir/multi_in_block.h"
#include "src/tint/lang/core/ir/switch.h"

TINT_INSTANTIATE_TYPEINFO(tint::core::ir::ExitSwitch);

namespace tint::core::ir {

ExitSwitch::ExitSwitch(Id id) : Base(id) {}

ExitSwitch::ExitSwitch(Id id, ir::Switch* sw, VectorRef<Value*> args /* = tint::Empty */)
    : Base(id) {
    SetSwitch(sw);
    AddOperands(ExitSwitch::kArgsOperandOffset, std::move(args));
}

ExitSwitch::~ExitSwitch() = default;

ExitSwitch* ExitSwitch::Clone(CloneContext& ctx) {
    auto* switch_ = ctx.Remap(Switch());
    auto args = ctx.Remap<ExitSwitch::kDefaultNumOperands>(Args());
    return ctx.ir.CreateInstruction<ExitSwitch>(switch_, args);
}

void ExitSwitch::SetSwitch(ir::Switch* s) {
    SetControlInstruction(s);
}

ir::Switch* ExitSwitch::Switch() {
    return static_cast<ir::Switch*>(ControlInstruction());
}

const ir::Switch* ExitSwitch::Switch() const {
    return static_cast<const ir::Switch*>(ControlInstruction());
}

}  // namespace tint::core::ir
