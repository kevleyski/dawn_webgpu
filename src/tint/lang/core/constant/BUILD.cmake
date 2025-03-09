# Copyright 2023 The Dawn & Tint Authors
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# 1. Redistributions of source code must retain the above copyright notice, this
#    list of conditions and the following disclaimer.
#
# 2. Redistributions in binary form must reproduce the above copyright notice,
#    this list of conditions and the following disclaimer in the documentation
#    and/or other materials provided with the distribution.
#
# 3. Neither the name of the copyright holder nor the names of its
#    contributors may be used to endorse or promote products derived from
#    this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
# DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
# FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
# SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
# CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
# OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

################################################################################
# File generated by 'tools/src/cmd/gen' using the template:
#   tools/src/cmd/gen/build/BUILD.cmake.tmpl
#
# To regenerate run: './tools/run gen'
#
#                       Do not modify this file directly
################################################################################

################################################################################
# Target:    tint_lang_core_constant
# Kind:      lib
################################################################################
tint_add_target(tint_lang_core_constant lib
  lang/core/constant/clone_context.h
  lang/core/constant/composite.cc
  lang/core/constant/composite.h
  lang/core/constant/eval.cc
  lang/core/constant/eval.h
  lang/core/constant/invalid.cc
  lang/core/constant/invalid.h
  lang/core/constant/manager.cc
  lang/core/constant/manager.h
  lang/core/constant/node.cc
  lang/core/constant/node.h
  lang/core/constant/scalar.cc
  lang/core/constant/scalar.h
  lang/core/constant/splat.cc
  lang/core/constant/splat.h
  lang/core/constant/value.cc
  lang/core/constant/value.h
)

tint_target_add_dependencies(tint_lang_core_constant lib
  tint_lang_core
  tint_lang_core_type
  tint_utils
  tint_utils_containers
  tint_utils_diagnostic
  tint_utils_ice
  tint_utils_macros
  tint_utils_math
  tint_utils_memory
  tint_utils_result
  tint_utils_rtti
  tint_utils_symbol
  tint_utils_text
)

tint_target_add_external_dependencies(tint_lang_core_constant lib
  "src_utils"
)

################################################################################
# Target:    tint_lang_core_constant_test
# Kind:      test
################################################################################
tint_add_target(tint_lang_core_constant_test test
  lang/core/constant/composite_test.cc
  lang/core/constant/eval_binary_op_test.cc
  lang/core/constant/eval_bitcast_test.cc
  lang/core/constant/eval_builtin_test.cc
  lang/core/constant/eval_construction_test.cc
  lang/core/constant/eval_conversion_test.cc
  lang/core/constant/eval_indexing_test.cc
  lang/core/constant/eval_member_access_test.cc
  lang/core/constant/eval_runtime_semantics_test.cc
  lang/core/constant/eval_test.h
  lang/core/constant/eval_unary_op_test.cc
  lang/core/constant/helper_test.h
  lang/core/constant/invalid_test.cc
  lang/core/constant/manager_test.cc
  lang/core/constant/scalar_test.cc
  lang/core/constant/splat_test.cc
  lang/core/constant/value_test.cc
)

tint_target_add_dependencies(tint_lang_core_constant_test test
  tint_api_common
  tint_lang_core
  tint_lang_core_constant
  tint_lang_core_intrinsic
  tint_lang_core_ir
  tint_lang_core_type
  tint_lang_core_type_test
  tint_lang_wgsl
  tint_lang_wgsl_ast
  tint_lang_wgsl_common
  tint_lang_wgsl_features
  tint_lang_wgsl_intrinsic
  tint_lang_wgsl_program
  tint_lang_wgsl_resolver
  tint_lang_wgsl_resolver_test
  tint_lang_wgsl_sem
  tint_utils
  tint_utils_containers
  tint_utils_diagnostic
  tint_utils_ice
  tint_utils_macros
  tint_utils_math
  tint_utils_memory
  tint_utils_result
  tint_utils_rtti
  tint_utils_symbol
  tint_utils_text
)

tint_target_add_external_dependencies(tint_lang_core_constant_test test
  "gtest"
  "src_utils"
)

if(TINT_BUILD_WGSL_READER)
  tint_target_add_dependencies(tint_lang_core_constant_test test
    tint_lang_wgsl_reader
  )
endif(TINT_BUILD_WGSL_READER)
