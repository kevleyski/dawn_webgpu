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

////////////////////////////////////////////////////////////////////////////////
// File generated by 'tools/src/cmd/gen' using the template:
//   src/tint/lang/wgsl/diagnostic_rule.cc.tmpl
//
// To regenerate run: './tools/run gen'
//
//                       Do not modify this file directly
////////////////////////////////////////////////////////////////////////////////

#include "src/tint/lang/wgsl/diagnostic_rule.h"

#include <string>

#include "src/tint/utils/rtti/traits.h"

namespace tint::wgsl {

/// ParseCoreDiagnosticRule parses a CoreDiagnosticRule from a string.
/// @param str the string to parse
/// @returns the parsed enum, or CoreDiagnosticRule::kUndefined if the string could not be parsed.
CoreDiagnosticRule ParseCoreDiagnosticRule(std::string_view str) {
    if (str == "derivative_uniformity") {
        return CoreDiagnosticRule::kDerivativeUniformity;
    }
    if (str == "subgroup_uniformity") {
        return CoreDiagnosticRule::kSubgroupUniformity;
    }
    return CoreDiagnosticRule::kUndefined;
}

std::string_view ToString(CoreDiagnosticRule value) {
    switch (value) {
        case CoreDiagnosticRule::kUndefined:
            return "undefined";
        case CoreDiagnosticRule::kDerivativeUniformity:
            return "derivative_uniformity";
        case CoreDiagnosticRule::kSubgroupUniformity:
            return "subgroup_uniformity";
    }
    return "<unknown>";
}

/// ParseChromiumDiagnosticRule parses a ChromiumDiagnosticRule from a string.
/// @param str the string to parse
/// @returns the parsed enum, or ChromiumDiagnosticRule::kUndefined if the string could not be
/// parsed.
ChromiumDiagnosticRule ParseChromiumDiagnosticRule(std::string_view str) {
    if (str == "subgroup_matrix_uniformity") {
        return ChromiumDiagnosticRule::kSubgroupMatrixUniformity;
    }
    if (str == "unreachable_code") {
        return ChromiumDiagnosticRule::kUnreachableCode;
    }
    return ChromiumDiagnosticRule::kUndefined;
}

std::string_view ToString(ChromiumDiagnosticRule value) {
    switch (value) {
        case ChromiumDiagnosticRule::kUndefined:
            return "undefined";
        case ChromiumDiagnosticRule::kSubgroupMatrixUniformity:
            return "subgroup_matrix_uniformity";
        case ChromiumDiagnosticRule::kUnreachableCode:
            return "unreachable_code";
    }
    return "<unknown>";
}

}  // namespace tint::wgsl
