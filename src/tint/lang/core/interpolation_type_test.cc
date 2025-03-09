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
//   src/tint/lang/core/interpolation_type_test.cc.tmpl
//
// To regenerate run: './tools/run gen'
//
//                       Do not modify this file directly
////////////////////////////////////////////////////////////////////////////////

#include "src/tint/lang/core/interpolation_type.h"

#include <gtest/gtest.h>
#include <string>

#include "src/tint/utils/text/string.h"

namespace tint::core {
namespace {

namespace interpolation_type_tests {

namespace parse_print_tests {

struct Case {
    const char* string;
    InterpolationType value;
};

inline std::ostream& operator<<(std::ostream& out, Case c) {
    return out << "'" << std::string(c.string) << "'";
}

static constexpr Case kValidCases[] = {
    {"flat", InterpolationType::kFlat},
    {"linear", InterpolationType::kLinear},
    {"perspective", InterpolationType::kPerspective},
};

static constexpr Case kInvalidCases[] = {
    {"ccat", InterpolationType::kUndefined},          {"3", InterpolationType::kUndefined},
    {"fVat", InterpolationType::kUndefined},          {"1inear", InterpolationType::kUndefined},
    {"lnqqar", InterpolationType::kUndefined},        {"linell77", InterpolationType::kUndefined},
    {"perppHqective", InterpolationType::kUndefined}, {"cespctve", InterpolationType::kUndefined},
    {"ebGpective", InterpolationType::kUndefined},
};

using InterpolationTypeParseTest = testing::TestWithParam<Case>;

TEST_P(InterpolationTypeParseTest, Parse) {
    const char* string = GetParam().string;
    InterpolationType expect = GetParam().value;
    EXPECT_EQ(expect, ParseInterpolationType(string));
}

INSTANTIATE_TEST_SUITE_P(ValidCases, InterpolationTypeParseTest, testing::ValuesIn(kValidCases));
INSTANTIATE_TEST_SUITE_P(InvalidCases,
                         InterpolationTypeParseTest,
                         testing::ValuesIn(kInvalidCases));

using InterpolationTypePrintTest = testing::TestWithParam<Case>;

TEST_P(InterpolationTypePrintTest, Print) {
    InterpolationType value = GetParam().value;
    const char* expect = GetParam().string;
    EXPECT_EQ(expect, ToString(value));
}

INSTANTIATE_TEST_SUITE_P(ValidCases, InterpolationTypePrintTest, testing::ValuesIn(kValidCases));

}  // namespace parse_print_tests

}  // namespace interpolation_type_tests

}  // namespace
}  // namespace tint::core
