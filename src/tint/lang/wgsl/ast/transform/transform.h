// Copyright 2020 The Dawn & Tint Authors
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

#ifndef SRC_TINT_LANG_WGSL_AST_TRANSFORM_TRANSFORM_H_
#define SRC_TINT_LANG_WGSL_AST_TRANSFORM_TRANSFORM_H_

#include <utility>

#include "src/tint/lang/wgsl/ast/transform/data.h"
#include "src/tint/lang/wgsl/program/program.h"
#include "src/tint/utils/rtti/castable.h"

// Forward declarations
namespace tint::program {
class CloneContext;
}

namespace tint::ast::transform {

/// The return type of Run()
class Output {
  public:
    /// Constructor
    Output();

    /// Constructor
    /// @param program the program to move into this Output
    explicit Output(Program&& program);

    /// Constructor
    /// @param program_ the program to move into this Output
    /// @param data_ a variadic list of additional data unique_ptrs produced by
    /// the transform
    template <typename... DATA>
    Output(Program&& program_, DATA... data_)
        : program(std::move(program_)), data(std::forward<DATA>(data_)...) {}

    /// The transformed program. May be empty on error.
    Program program;

    /// Extra output generated by the transforms.
    DataMap data;
};

/// Interface for Program transforms
class Transform : public Castable<Transform> {
  public:
    /// Constructor
    Transform();
    /// Destructor
    ~Transform() override;

    /// Runs the transform on @p program, returning the transformation result or a clone of
    /// @p program.
    /// @param program the source program to transform
    /// @param data optional extra transform-specific input data
    /// @returns the transformation result
    Output Run(const Program& program, const DataMap& data = {}) const;

    /// The return value of Apply().
    /// If SkipTransform (std::nullopt), then the transform is not needed to be run.
    using ApplyResult = std::optional<Program>;

    /// Value returned from Apply() to indicate that the transform does not need to be run
    static inline constexpr std::nullopt_t SkipTransform = std::nullopt;

    /// Runs the transform on `program`, return.
    /// @param program the input program
    /// @param inputs optional extra transform-specific input data
    /// @param outputs optional extra transform-specific output data
    /// @returns a transformed program, or std::nullopt if the transform didn't need to run.
    virtual ApplyResult Apply(const Program& program,
                              const DataMap& inputs,
                              DataMap& outputs) const = 0;

    /// CreateASTTypeFor constructs new Type that reconstructs the semantic type `ty`.
    /// @param ctx the clone context
    /// @param ty the semantic type to reconstruct
    /// @returns an Type that when resolved, will produce the semantic type `ty`.
    static Type CreateASTTypeFor(program::CloneContext& ctx, const core::type::Type* ty);

  protected:
    /// Removes the statement `stmt` from the transformed program.
    /// RemoveStatement handles edge cases, like statements in the initializer and
    /// continuing of for-loops.
    /// @param ctx the clone context
    /// @param stmt the statement to remove when the program is cloned
    static void RemoveStatement(program::CloneContext& ctx, const Statement* stmt);
};

}  // namespace tint::ast::transform

#endif  // SRC_TINT_LANG_WGSL_AST_TRANSFORM_TRANSFORM_H_
