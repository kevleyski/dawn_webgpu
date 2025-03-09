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
//   src/tint/lang/spirv/builtin_fn.cc.tmpl
//
// To regenerate run: './tools/run gen'
//
//                       Do not modify this file directly
////////////////////////////////////////////////////////////////////////////////

#include "src/tint/lang/spirv/builtin_fn.h"

namespace tint::spirv {

const char* str(BuiltinFn i) {
    switch (i) {
        case BuiltinFn::kNone:
            return "<none>";
        case BuiltinFn::kArrayLength:
            return "array_length";
        case BuiltinFn::kAtomicLoad:
            return "atomic_load";
        case BuiltinFn::kAtomicStore:
            return "atomic_store";
        case BuiltinFn::kAtomicExchange:
            return "atomic_exchange";
        case BuiltinFn::kAtomicCompareExchange:
            return "atomic_compare_exchange";
        case BuiltinFn::kAtomicIAdd:
            return "atomic_i_add";
        case BuiltinFn::kAtomicISub:
            return "atomic_i_sub";
        case BuiltinFn::kAtomicSMax:
            return "atomic_s_max";
        case BuiltinFn::kAtomicSMin:
            return "atomic_s_min";
        case BuiltinFn::kAtomicUMax:
            return "atomic_u_max";
        case BuiltinFn::kAtomicUMin:
            return "atomic_u_min";
        case BuiltinFn::kAtomicAnd:
            return "atomic_and";
        case BuiltinFn::kAtomicOr:
            return "atomic_or";
        case BuiltinFn::kAtomicXor:
            return "atomic_xor";
        case BuiltinFn::kAtomicIIncrement:
            return "atomic_i_increment";
        case BuiltinFn::kAtomicIDecrement:
            return "atomic_i_decrement";
        case BuiltinFn::kDot:
            return "dot";
        case BuiltinFn::kImageDrefGather:
            return "image_dref_gather";
        case BuiltinFn::kImageFetch:
            return "image_fetch";
        case BuiltinFn::kImageGather:
            return "image_gather";
        case BuiltinFn::kImageQuerySize:
            return "image_query_size";
        case BuiltinFn::kImageQuerySizeLod:
            return "image_query_size_lod";
        case BuiltinFn::kImageRead:
            return "image_read";
        case BuiltinFn::kImageSampleImplicitLod:
            return "image_sample_implicit_lod";
        case BuiltinFn::kImageSampleExplicitLod:
            return "image_sample_explicit_lod";
        case BuiltinFn::kImageSampleDrefImplicitLod:
            return "image_sample_dref_implicit_lod";
        case BuiltinFn::kImageSampleDrefExplicitLod:
            return "image_sample_dref_explicit_lod";
        case BuiltinFn::kImageWrite:
            return "image_write";
        case BuiltinFn::kMatrixTimesMatrix:
            return "matrix_times_matrix";
        case BuiltinFn::kMatrixTimesScalar:
            return "matrix_times_scalar";
        case BuiltinFn::kMatrixTimesVector:
            return "matrix_times_vector";
        case BuiltinFn::kSampledImage:
            return "sampled_image";
        case BuiltinFn::kSelect:
            return "select";
        case BuiltinFn::kVectorTimesMatrix:
            return "vector_times_matrix";
        case BuiltinFn::kVectorTimesScalar:
            return "vector_times_scalar";
        case BuiltinFn::kNormalize:
            return "normalize";
        case BuiltinFn::kInverse:
            return "inverse";
        case BuiltinFn::kSign:
            return "sign";
        case BuiltinFn::kAbs:
            return "abs";
        case BuiltinFn::kSMax:
            return "s_max";
        case BuiltinFn::kSMin:
            return "s_min";
        case BuiltinFn::kSClamp:
            return "s_clamp";
        case BuiltinFn::kUMax:
            return "u_max";
        case BuiltinFn::kUMin:
            return "u_min";
        case BuiltinFn::kUClamp:
            return "u_clamp";
        case BuiltinFn::kFindILsb:
            return "find_i_lsb";
        case BuiltinFn::kFindSMsb:
            return "find_s_msb";
        case BuiltinFn::kFindUMsb:
            return "find_u_msb";
        case BuiltinFn::kRefract:
            return "refract";
        case BuiltinFn::kReflect:
            return "reflect";
        case BuiltinFn::kFaceForward:
            return "face_forward";
        case BuiltinFn::kLdexp:
            return "ldexp";
        case BuiltinFn::kModf:
            return "modf";
        case BuiltinFn::kFrexp:
            return "frexp";
        case BuiltinFn::kBitCount:
            return "bit_count";
        case BuiltinFn::kBitFieldInsert:
            return "bit_field_insert";
        case BuiltinFn::kBitFieldSExtract:
            return "bit_field_s_extract";
        case BuiltinFn::kBitFieldUExtract:
            return "bit_field_u_extract";
        case BuiltinFn::kAdd:
            return "add";
        case BuiltinFn::kSub:
            return "sub";
        case BuiltinFn::kMul:
            return "mul";
        case BuiltinFn::kSDiv:
            return "s_div";
        case BuiltinFn::kSMod:
            return "s_mod";
        case BuiltinFn::kSGreaterThan:
            return "s_greater_than";
        case BuiltinFn::kSGreaterThanEqual:
            return "s_greater_than_equal";
        case BuiltinFn::kSLessThan:
            return "s_less_than";
        case BuiltinFn::kSLessThanEqual:
            return "s_less_than_equal";
        case BuiltinFn::kUGreaterThan:
            return "u_greater_than";
        case BuiltinFn::kUGreaterThanEqual:
            return "u_greater_than_equal";
        case BuiltinFn::kULessThan:
            return "u_less_than";
        case BuiltinFn::kULessThanEqual:
            return "u_less_than_equal";
        case BuiltinFn::kConvertFToS:
            return "convert_f_to_s";
        case BuiltinFn::kConvertSToF:
            return "convert_s_to_f";
        case BuiltinFn::kConvertUToF:
            return "convert_u_to_f";
        case BuiltinFn::kBitwiseAnd:
            return "bitwise_and";
        case BuiltinFn::kBitwiseOr:
            return "bitwise_or";
        case BuiltinFn::kBitwiseXor:
            return "bitwise_xor";
        case BuiltinFn::kEqual:
            return "equal";
        case BuiltinFn::kNotEqual:
            return "not_equal";
        case BuiltinFn::kShiftLeftLogical:
            return "shift_left_logical";
        case BuiltinFn::kShiftRightLogical:
            return "shift_right_logical";
        case BuiltinFn::kShiftRightArithmetic:
            return "shift_right_arithmetic";
        case BuiltinFn::kNot:
            return "not";
        case BuiltinFn::kSNegate:
            return "s_negate";
        case BuiltinFn::kFMod:
            return "f_mod";
        case BuiltinFn::kSDot:
            return "s_dot";
        case BuiltinFn::kUDot:
            return "u_dot";
        case BuiltinFn::kCooperativeMatrixLoad:
            return "cooperative_matrix_load";
        case BuiltinFn::kCooperativeMatrixStore:
            return "cooperative_matrix_store";
        case BuiltinFn::kCooperativeMatrixMulAdd:
            return "cooperative_matrix_mul_add";
    }
    return "<unknown>";
}

tint::core::ir::Instruction::Accesses GetSideEffects(BuiltinFn fn) {
    switch (fn) {
        case BuiltinFn::kAtomicLoad:
        case BuiltinFn::kImageDrefGather:
        case BuiltinFn::kImageFetch:
        case BuiltinFn::kImageGather:
        case BuiltinFn::kImageRead:
        case BuiltinFn::kImageSampleImplicitLod:
        case BuiltinFn::kImageSampleExplicitLod:
        case BuiltinFn::kImageSampleDrefImplicitLod:
        case BuiltinFn::kImageSampleDrefExplicitLod:
        case BuiltinFn::kSampledImage:
        case BuiltinFn::kCooperativeMatrixLoad:
            return core::ir::Instruction::Accesses{core::ir::Instruction::Access::kLoad};

        case BuiltinFn::kImageWrite:
        case BuiltinFn::kModf:
        case BuiltinFn::kFrexp:
        case BuiltinFn::kCooperativeMatrixStore:
            return core::ir::Instruction::Accesses{core::ir::Instruction::Access::kStore};

        case BuiltinFn::kAtomicAnd:
        case BuiltinFn::kAtomicCompareExchange:
        case BuiltinFn::kAtomicExchange:
        case BuiltinFn::kAtomicIAdd:
        case BuiltinFn::kAtomicISub:
        case BuiltinFn::kAtomicOr:
        case BuiltinFn::kAtomicSMax:
        case BuiltinFn::kAtomicSMin:
        case BuiltinFn::kAtomicStore:
        case BuiltinFn::kAtomicUMax:
        case BuiltinFn::kAtomicUMin:
        case BuiltinFn::kAtomicXor:
        case BuiltinFn::kAtomicIIncrement:
        case BuiltinFn::kAtomicIDecrement:
            return core::ir::Instruction::Accesses{core::ir::Instruction::Access::kLoad,
                                                   core::ir::Instruction::Access::kStore};

        case BuiltinFn::kArrayLength:
        case BuiltinFn::kDot:
        case BuiltinFn::kImageQuerySize:
        case BuiltinFn::kImageQuerySizeLod:
        case BuiltinFn::kMatrixTimesMatrix:
        case BuiltinFn::kMatrixTimesScalar:
        case BuiltinFn::kMatrixTimesVector:
        case BuiltinFn::kSelect:
        case BuiltinFn::kVectorTimesMatrix:
        case BuiltinFn::kVectorTimesScalar:
        case BuiltinFn::kSDot:
        case BuiltinFn::kUDot:
        case BuiltinFn::kNone:
        case BuiltinFn::kNormalize:
        case BuiltinFn::kInverse:
        case BuiltinFn::kSign:
        case BuiltinFn::kAbs:
        case BuiltinFn::kSMax:
        case BuiltinFn::kSMin:
        case BuiltinFn::kSClamp:
        case BuiltinFn::kUMax:
        case BuiltinFn::kUMin:
        case BuiltinFn::kUClamp:
        case BuiltinFn::kFindILsb:
        case BuiltinFn::kFindSMsb:
        case BuiltinFn::kFindUMsb:
        case BuiltinFn::kRefract:
        case BuiltinFn::kReflect:
        case BuiltinFn::kFaceForward:
        case BuiltinFn::kLdexp:
        case BuiltinFn::kCooperativeMatrixMulAdd:
        case BuiltinFn::kBitCount:
        case BuiltinFn::kBitFieldInsert:
        case BuiltinFn::kBitFieldSExtract:
        case BuiltinFn::kBitFieldUExtract:
        case BuiltinFn::kAdd:
        case BuiltinFn::kSub:
        case BuiltinFn::kMul:
        case BuiltinFn::kSDiv:
        case BuiltinFn::kSMod:
        case BuiltinFn::kConvertFToS:
        case BuiltinFn::kConvertSToF:
        case BuiltinFn::kConvertUToF:
        case BuiltinFn::kBitwiseAnd:
        case BuiltinFn::kBitwiseOr:
        case BuiltinFn::kBitwiseXor:
        case BuiltinFn::kEqual:
        case BuiltinFn::kNotEqual:
        case BuiltinFn::kSGreaterThan:
        case BuiltinFn::kSGreaterThanEqual:
        case BuiltinFn::kSLessThan:
        case BuiltinFn::kSLessThanEqual:
        case BuiltinFn::kUGreaterThan:
        case BuiltinFn::kUGreaterThanEqual:
        case BuiltinFn::kULessThan:
        case BuiltinFn::kULessThanEqual:
        case BuiltinFn::kShiftLeftLogical:
        case BuiltinFn::kShiftRightLogical:
        case BuiltinFn::kShiftRightArithmetic:
        case BuiltinFn::kNot:
        case BuiltinFn::kSNegate:
        case BuiltinFn::kFMod:
            break;
    }
    return core::ir::Instruction::Accesses{};
}

}  // namespace tint::spirv
