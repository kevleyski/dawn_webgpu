// Copyright 2022 The Dawn & Tint Authors
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
//   src/tint/lang/core/builtin_type_test.cc.tmpl
//
// To regenerate run: './tools/run gen'
//
//                       Do not modify this file directly
////////////////////////////////////////////////////////////////////////////////

#include "src/tint/lang/core/builtin_type.h"

#include <string>

#include "gtest/gtest.h"

#include "src/tint/utils/text/string.h"

namespace tint::core {
namespace {

namespace parse_print_tests {

struct Case {
    const char* string;
    BuiltinType value;
};

inline std::ostream& operator<<(std::ostream& out, Case c) {
    return out << "'" << std::string(c.string) << "'";
}

static constexpr Case kValidCases[] = {
    {"__atomic_compare_exchange_result_i32", BuiltinType::kAtomicCompareExchangeResultI32},
    {"__atomic_compare_exchange_result_u32", BuiltinType::kAtomicCompareExchangeResultU32},
    {"__frexp_result_abstract", BuiltinType::kFrexpResultAbstract},
    {"__frexp_result_f16", BuiltinType::kFrexpResultF16},
    {"__frexp_result_f32", BuiltinType::kFrexpResultF32},
    {"__frexp_result_vec2_abstract", BuiltinType::kFrexpResultVec2Abstract},
    {"__frexp_result_vec2_f16", BuiltinType::kFrexpResultVec2F16},
    {"__frexp_result_vec2_f32", BuiltinType::kFrexpResultVec2F32},
    {"__frexp_result_vec3_abstract", BuiltinType::kFrexpResultVec3Abstract},
    {"__frexp_result_vec3_f16", BuiltinType::kFrexpResultVec3F16},
    {"__frexp_result_vec3_f32", BuiltinType::kFrexpResultVec3F32},
    {"__frexp_result_vec4_abstract", BuiltinType::kFrexpResultVec4Abstract},
    {"__frexp_result_vec4_f16", BuiltinType::kFrexpResultVec4F16},
    {"__frexp_result_vec4_f32", BuiltinType::kFrexpResultVec4F32},
    {"__modf_result_abstract", BuiltinType::kModfResultAbstract},
    {"__modf_result_f16", BuiltinType::kModfResultF16},
    {"__modf_result_f32", BuiltinType::kModfResultF32},
    {"__modf_result_vec2_abstract", BuiltinType::kModfResultVec2Abstract},
    {"__modf_result_vec2_f16", BuiltinType::kModfResultVec2F16},
    {"__modf_result_vec2_f32", BuiltinType::kModfResultVec2F32},
    {"__modf_result_vec3_abstract", BuiltinType::kModfResultVec3Abstract},
    {"__modf_result_vec3_f16", BuiltinType::kModfResultVec3F16},
    {"__modf_result_vec3_f32", BuiltinType::kModfResultVec3F32},
    {"__modf_result_vec4_abstract", BuiltinType::kModfResultVec4Abstract},
    {"__modf_result_vec4_f16", BuiltinType::kModfResultVec4F16},
    {"__modf_result_vec4_f32", BuiltinType::kModfResultVec4F32},
    {"array", BuiltinType::kArray},
    {"atomic", BuiltinType::kAtomic},
    {"binding_array", BuiltinType::kBindingArray},
    {"bool", BuiltinType::kBool},
    {"f16", BuiltinType::kF16},
    {"f32", BuiltinType::kF32},
    {"i32", BuiltinType::kI32},
    {"input_attachment", BuiltinType::kInputAttachment},
    {"mat2x2", BuiltinType::kMat2X2},
    {"mat2x2f", BuiltinType::kMat2X2F},
    {"mat2x2h", BuiltinType::kMat2X2H},
    {"mat2x3", BuiltinType::kMat2X3},
    {"mat2x3f", BuiltinType::kMat2X3F},
    {"mat2x3h", BuiltinType::kMat2X3H},
    {"mat2x4", BuiltinType::kMat2X4},
    {"mat2x4f", BuiltinType::kMat2X4F},
    {"mat2x4h", BuiltinType::kMat2X4H},
    {"mat3x2", BuiltinType::kMat3X2},
    {"mat3x2f", BuiltinType::kMat3X2F},
    {"mat3x2h", BuiltinType::kMat3X2H},
    {"mat3x3", BuiltinType::kMat3X3},
    {"mat3x3f", BuiltinType::kMat3X3F},
    {"mat3x3h", BuiltinType::kMat3X3H},
    {"mat3x4", BuiltinType::kMat3X4},
    {"mat3x4f", BuiltinType::kMat3X4F},
    {"mat3x4h", BuiltinType::kMat3X4H},
    {"mat4x2", BuiltinType::kMat4X2},
    {"mat4x2f", BuiltinType::kMat4X2F},
    {"mat4x2h", BuiltinType::kMat4X2H},
    {"mat4x3", BuiltinType::kMat4X3},
    {"mat4x3f", BuiltinType::kMat4X3F},
    {"mat4x3h", BuiltinType::kMat4X3H},
    {"mat4x4", BuiltinType::kMat4X4},
    {"mat4x4f", BuiltinType::kMat4X4F},
    {"mat4x4h", BuiltinType::kMat4X4H},
    {"ptr", BuiltinType::kPtr},
    {"sampler", BuiltinType::kSampler},
    {"sampler_comparison", BuiltinType::kSamplerComparison},
    {"subgroup_matrix_left", BuiltinType::kSubgroupMatrixLeft},
    {"subgroup_matrix_result", BuiltinType::kSubgroupMatrixResult},
    {"subgroup_matrix_right", BuiltinType::kSubgroupMatrixRight},
    {"texture_1d", BuiltinType::kTexture1D},
    {"texture_2d", BuiltinType::kTexture2D},
    {"texture_2d_array", BuiltinType::kTexture2DArray},
    {"texture_3d", BuiltinType::kTexture3D},
    {"texture_cube", BuiltinType::kTextureCube},
    {"texture_cube_array", BuiltinType::kTextureCubeArray},
    {"texture_depth_2d", BuiltinType::kTextureDepth2D},
    {"texture_depth_2d_array", BuiltinType::kTextureDepth2DArray},
    {"texture_depth_cube", BuiltinType::kTextureDepthCube},
    {"texture_depth_cube_array", BuiltinType::kTextureDepthCubeArray},
    {"texture_depth_multisampled_2d", BuiltinType::kTextureDepthMultisampled2D},
    {"texture_external", BuiltinType::kTextureExternal},
    {"texture_multisampled_2d", BuiltinType::kTextureMultisampled2D},
    {"texture_storage_1d", BuiltinType::kTextureStorage1D},
    {"texture_storage_2d", BuiltinType::kTextureStorage2D},
    {"texture_storage_2d_array", BuiltinType::kTextureStorage2DArray},
    {"texture_storage_3d", BuiltinType::kTextureStorage3D},
    {"u32", BuiltinType::kU32},
    {"vec2", BuiltinType::kVec2},
    {"vec2f", BuiltinType::kVec2F},
    {"vec2h", BuiltinType::kVec2H},
    {"vec2i", BuiltinType::kVec2I},
    {"vec2u", BuiltinType::kVec2U},
    {"vec3", BuiltinType::kVec3},
    {"vec3f", BuiltinType::kVec3F},
    {"vec3h", BuiltinType::kVec3H},
    {"vec3i", BuiltinType::kVec3I},
    {"vec3u", BuiltinType::kVec3U},
    {"vec4", BuiltinType::kVec4},
    {"vec4f", BuiltinType::kVec4F},
    {"vec4h", BuiltinType::kVec4H},
    {"vec4i", BuiltinType::kVec4I},
    {"vec4u", BuiltinType::kVec4U},
};

static constexpr Case kInvalidCases[] = {
    {"__atomic_compareexchangeccresult_i32", BuiltinType::kUndefined},
    {"__atoml3_compare_exchane_resulti2", BuiltinType::kUndefined},
    {"__atomic_compare_Vxchange_result_i32", BuiltinType::kUndefined},
    {"__atomic_com1are_exchange_result_u32", BuiltinType::kUndefined},
    {"__atomic_qqompare_exchage_resulJ_u32", BuiltinType::kUndefined},
    {"__atllmic_compare_exchange_result_u377", BuiltinType::kUndefined},
    {"qpp_frexp_resultHHbstract", BuiltinType::kUndefined},
    {"__fep_esulv_abstract", BuiltinType::kUndefined},
    {"__Gbexp_resul_abstract", BuiltinType::kUndefined},
    {"_vfrexp_resiilt_f16", BuiltinType::kUndefined},
    {"__fr8xp_resultWWf16", BuiltinType::kUndefined},
    {"__frxp_result_fMxx", BuiltinType::kUndefined},
    {"gg_fXexp_reslt_f32", BuiltinType::kUndefined},
    {"__frXxpresul_V32", BuiltinType::kUndefined},
    {"__frexp_r3sult_f32", BuiltinType::kUndefined},
    {"__frexpEresult_vec2_abstract", BuiltinType::kUndefined},
    {"__frex_rPPsult_vTTc2_abstract", BuiltinType::kUndefined},
    {"__frexp_resuddt_ec2_xxbstract", BuiltinType::kUndefined},
    {"__frexp_result_ve442_f16", BuiltinType::kUndefined},
    {"_SSfrexp_resulVV_vec2_f16", BuiltinType::kUndefined},
    {"__fRxpRr22sult_vec2_f16", BuiltinType::kUndefined},
    {"__frexp_res9lt_vec_fF2", BuiltinType::kUndefined},
    {"__frexp_result_ve2_f32", BuiltinType::kUndefined},
    {"_OOfrexp_result_VeHRRf32", BuiltinType::kUndefined},
    {"__frexp_reyult_vec3_absract", BuiltinType::kUndefined},
    {"__frexp_re77ulll_vecG_arrnstract", BuiltinType::kUndefined},
    {"__4rexp_result_vec3_00bstract", BuiltinType::kUndefined},
    {"__oorxp_result_vec316", BuiltinType::kUndefined},
    {"zz_frexp_esult_ec3_f16", BuiltinType::kUndefined},
    {"__iirex11_result_vp3_f16", BuiltinType::kUndefined},
    {"__frXXxp_result_vec3_f32", BuiltinType::kUndefined},
    {"__fnnexp99resIIlt_vec3_f355", BuiltinType::kUndefined},
    {"__faSSerrp_result_vHHc3_fY2", BuiltinType::kUndefined},
    {"__freHp_resutve4_abstkkact", BuiltinType::kUndefined},
    {"jfrexpgresult_veRR4_abstrac", BuiltinType::kUndefined},
    {"__frexp_resul_vec4_absbrac", BuiltinType::kUndefined},
    {"_jfrexp_result_vec4_f16", BuiltinType::kUndefined},
    {"__frexp_resultvec4_f16", BuiltinType::kUndefined},
    {"__freqpresultvec4_f16", BuiltinType::kUndefined},
    {"__frexNN_result_vec_f32", BuiltinType::kUndefined},
    {"__frexp_resvvlt_vc4_f3", BuiltinType::kUndefined},
    {"__frexp_esult_vec4_f3QQ", BuiltinType::kUndefined},
    {"rmodf_reffultabstract", BuiltinType::kUndefined},
    {"__jodf_result_abstract", BuiltinType::kUndefined},
    {"_mNNwdf_r2sult8abstract", BuiltinType::kUndefined},
    {"__mdf_result_f16", BuiltinType::kUndefined},
    {"__modrr_result_f16", BuiltinType::kUndefined},
    {"__mGdf_result_f16", BuiltinType::kUndefined},
    {"__modf_resulFF_f32", BuiltinType::kUndefined},
    {"__modf_eult_E3", BuiltinType::kUndefined},
    {"__odf_resurrt_f32", BuiltinType::kUndefined},
    {"__modf_reslt_vec_abstract", BuiltinType::kUndefined},
    {"__modfJJresuDt_Xc2_abstract", BuiltinType::kUndefined},
    {"_modf_reslt_vec28abstrct", BuiltinType::kUndefined},
    {"__odf_reult_vkc211f1", BuiltinType::kUndefined},
    {"__mdf_result_vec2_f16", BuiltinType::kUndefined},
    {"__modf_resuJt_vec2_f6", BuiltinType::kUndefined},
    {"__modf_result_vec2cf32", BuiltinType::kUndefined},
    {"__modf_result_vec2_fO2", BuiltinType::kUndefined},
    {"KK_movvf_result_vec2_ftt__", BuiltinType::kUndefined},
    {"xx_modf_r8sult_vec3_abtr5ct", BuiltinType::kUndefined},
    {"__modf_resuFt_vec3_aqt__act", BuiltinType::kUndefined},
    {"__modf_result_vec3_aqqstrac", BuiltinType::kUndefined},
    {"__odf_33esult_vec3_f1O6", BuiltinType::kUndefined},
    {"_ttm6df_resQQlt_ooec9_f16", BuiltinType::kUndefined},
    {"_modf_resu66t_vec3_f16", BuiltinType::kUndefined},
    {"__mdf_resultOvxc3_f36zz", BuiltinType::kUndefined},
    {"__modf_resuyyt_vec3_f32", BuiltinType::kUndefined},
    {"__mod_resul_vecZHHf32", BuiltinType::kUndefined},
    {"__modf_reqult_44ec4WWbstract", BuiltinType::kUndefined},
    {"__mof_result_vec4_abstrOOct", BuiltinType::kUndefined},
    {"__modYooresult_vh4_bstract", BuiltinType::kUndefined},
    {"__modf_relt_ve4_f16", BuiltinType::kUndefined},
    {"__modf_result_ve4Ff16", BuiltinType::kUndefined},
    {"__modf_result_wec4_f1", BuiltinType::kUndefined},
    {"__Kdff_rGsult_vec4_f2", BuiltinType::kUndefined},
    {"__modf_reKKulq_vec4_f32", BuiltinType::kUndefined},
    {"__modf_resummt3vec4_f3F", BuiltinType::kUndefined},
    {"arry", BuiltinType::kUndefined},
    {"qray", BuiltinType::kUndefined},
    {"arrbb", BuiltinType::kUndefined},
    {"iomic", BuiltinType::kUndefined},
    {"aOOmiq", BuiltinType::kUndefined},
    {"atomTvvc", BuiltinType::kUndefined},
    {"binding_aFFray", BuiltinType::kUndefined},
    {"indinPfaQ0ray", BuiltinType::kUndefined},
    {"binding_arPay", BuiltinType::kUndefined},
    {"bos77", BuiltinType::kUndefined},
    {"CoRbbl", BuiltinType::kUndefined},
    {"booXX", BuiltinType::kUndefined},
    {"qOOO6", BuiltinType::kUndefined},
    {"fs", BuiltinType::kUndefined},
    {"f1X", BuiltinType::kUndefined},
    {"f3", BuiltinType::kUndefined},
    {"q", BuiltinType::kUndefined},
    {"f322", BuiltinType::kUndefined},
    {"0yz2", BuiltinType::kUndefined},
    {"iVP", BuiltinType::kUndefined},
    {"Cnn", BuiltinType::kUndefined},
    {"nput_attacAAmeHHt", BuiltinType::kUndefined},
    {"nput_attachment", BuiltinType::kUndefined},
    {"input_attKKfmen", BuiltinType::kUndefined},
    {"Paggx", BuiltinType::kUndefined},
    {"mat2x", BuiltinType::kUndefined},
    {"maN2c42", BuiltinType::kUndefined},
    {"ma7ppl2f", BuiltinType::kUndefined},
    {"mNNt2xg", BuiltinType::kUndefined},
    {"uub2XX2f", BuiltinType::kUndefined},
    {"matx2h", BuiltinType::kUndefined},
    {"Qt882h", BuiltinType::kUndefined},
    {"mt9q2h", BuiltinType::kUndefined},
    {"mat2113", BuiltinType::kUndefined},
    {"Ft2xi22", BuiltinType::kUndefined},
    {"m7t2x3", BuiltinType::kUndefined},
    {"m2t2xNf", BuiltinType::kUndefined},
    {"mVVt2x3f", BuiltinType::kUndefined},
    {"FaWW2w11f", BuiltinType::kUndefined},
    {"mawwx3h", BuiltinType::kUndefined},
    {"Dat2x3h", BuiltinType::kUndefined},
    {"mt2x3K", BuiltinType::kUndefined},
    {"11at2xPP", BuiltinType::kUndefined},
    {"mat2x", BuiltinType::kUndefined},
    {"mat2xYY", BuiltinType::kUndefined},
    {"mttHH4kk", BuiltinType::kUndefined},
    {"mat2rr4f", BuiltinType::kUndefined},
    {"WWas2x4f", BuiltinType::kUndefined},
    {"Yt2x4h", BuiltinType::kUndefined},
    {"mt2qfh", BuiltinType::kUndefined},
    {"mav222xuh", BuiltinType::kUndefined},
    {"mt32", BuiltinType::kUndefined},
    {"maY32", BuiltinType::kUndefined},
    {"YYa7y3E2", BuiltinType::kUndefined},
    {"da3xMof", BuiltinType::kUndefined},
    {"matMMx2", BuiltinType::kUndefined},
    {"mat3x55f", BuiltinType::kUndefined},
    {"maN32", BuiltinType::kUndefined},
    {"ma3Ox33", BuiltinType::kUndefined},
    {"m3t3x2h", BuiltinType::kUndefined},
    {"mt3I3", BuiltinType::kUndefined},
    {"mnnt3xr", BuiltinType::kUndefined},
    {"mXX", BuiltinType::kUndefined},
    {"LatIx3f", BuiltinType::kUndefined},
    {"at3ff", BuiltinType::kUndefined},
    {"mYtURD3", BuiltinType::kUndefined},
    {"mah3x3h", BuiltinType::kUndefined},
    {"uuIqt3x", BuiltinType::kUndefined},
    {"maH3x3h", BuiltinType::kUndefined},
    {"at3Qvv", BuiltinType::kUndefined},
    {"66ate", BuiltinType::kUndefined},
    {"mat7x", BuiltinType::kUndefined},
    {"m55t3x0DD", BuiltinType::kUndefined},
    {"maH3x4II", BuiltinType::kUndefined},
    {"at3x4", BuiltinType::kUndefined},
    {"rat3x499", BuiltinType::kUndefined},
    {"mGtt31W4h", BuiltinType::kUndefined},
    {"yatx4", BuiltinType::kUndefined},
    {"mt4x2", BuiltinType::kUndefined},
    {"maBBI4x2", BuiltinType::kUndefined},
    {"mat8TTx2", BuiltinType::kUndefined},
    {"ddUUnntYYx2f", BuiltinType::kUndefined},
    {"m5CCxxdZ", BuiltinType::kUndefined},
    {"matkkq2f", BuiltinType::kUndefined},
    {"005itpxh", BuiltinType::kUndefined},
    {"maIInnx2h", BuiltinType::kUndefined},
    {"Ka4Wcc", BuiltinType::kUndefined},
    {"mtKK", BuiltinType::kUndefined},
    {"ma664x3", BuiltinType::kUndefined},
    {"mKKtPx", BuiltinType::kUndefined},
    {"xxatx3f", BuiltinType::kUndefined},
    {"qat4x3f", BuiltinType::kUndefined},
    {"MMayySrxf", BuiltinType::kUndefined},
    {"mat3h", BuiltinType::kUndefined},
    {"tx3h", BuiltinType::kUndefined},
    {"ma5F4x3h", BuiltinType::kUndefined},
    {"rraz44x4", BuiltinType::kUndefined},
    {"aWWx", BuiltinType::kUndefined},
    {"ZZJJtCxX", BuiltinType::kUndefined},
    {"maPPx4f", BuiltinType::kUndefined},
    {"mat4c4f", BuiltinType::kUndefined},
    {"matPPll6f", BuiltinType::kUndefined},
    {"mat994yy", BuiltinType::kUndefined},
    {"mat4JKKh", BuiltinType::kUndefined},
    {"mat4_h", BuiltinType::kUndefined},
    {"K", BuiltinType::kUndefined},
    {"kVz", BuiltinType::kUndefined},
    {"KtS", BuiltinType::kUndefined},
    {"ampler", BuiltinType::kUndefined},
    {"aVVpler", BuiltinType::kUndefined},
    {"AAamIlUr", BuiltinType::kUndefined},
    {"jamper_compaRson", BuiltinType::kUndefined},
    {"amplr44compYYriso", BuiltinType::kUndefined},
    {"samper_comparison", BuiltinType::kUndefined},
    {"sub9rup11xmatrix_eft", BuiltinType::kUndefined},
    {"sJbrmmup_matcci_left", BuiltinType::kUndefined},
    {"subgroup_matrx_leJJt", BuiltinType::kUndefined},
    {"lDubgUouCC_matrix_resflt", BuiltinType::kUndefined},
    {"subgroup_matrix_resugt", BuiltinType::kUndefined},
    {"subgroCC_atrix_reult", BuiltinType::kUndefined},
    {"subgroup_matrx_right", BuiltinType::kUndefined},
    {"subgroup_ma__rix_rIght", BuiltinType::kUndefined},
    {"PPbroup_mNtttix_right", BuiltinType::kUndefined},
    {"tddx3ure_1d", BuiltinType::kUndefined},
    {"teyytur_Kd", BuiltinType::kUndefined},
    {"tetuuud", BuiltinType::kUndefined},
    {"t03nnuri_2d", BuiltinType::kUndefined},
    {"CCentuKuuv2d", BuiltinType::kUndefined},
    {"tXxtllre2d", BuiltinType::kUndefined},
    {"tppxture_2d_array", BuiltinType::kUndefined},
    {"txture_2d_awwray", BuiltinType::kUndefined},
    {"gexture2dmmaruua", BuiltinType::kUndefined},
    {"txtureaam", BuiltinType::kUndefined},
    {"texTcuRRZ_3d", BuiltinType::kUndefined},
    {"teTt88rO_3d", BuiltinType::kUndefined},
    {"texture_cum0e", BuiltinType::kUndefined},
    {"teBBtume_cube", BuiltinType::kUndefined},
    {"texppueMcub", BuiltinType::kUndefined},
    {"textre_cubeOOarray", BuiltinType::kUndefined},
    {"texture_cubeGaGGay", BuiltinType::kUndefined},
    {"tHHx11ure_cube_array", BuiltinType::kUndefined},
    {"txture_depeF6h_2d", BuiltinType::kUndefined},
    {"texture_dph_2d", BuiltinType::kUndefined},
    {"texture_dKptiil2d", BuiltinType::kUndefined},
    {"texture_epth_2d_array", BuiltinType::kUndefined},
    {"textv99e_depth_2dIIarray", BuiltinType::kUndefined},
    {"texture_deth_2d_array", BuiltinType::kUndefined},
    {"hexture_depth_cube", BuiltinType::kUndefined},
    {"textulledeptPzz_cube", BuiltinType::kUndefined},
    {"txtu_deph_cube", BuiltinType::kUndefined},
    {"teqqture_depth_cub_arffay", BuiltinType::kUndefined},
    {"texture_dddpW_cube_aJJray", BuiltinType::kUndefined},
    {"textur_deXXzz_cube_array", BuiltinType::kUndefined},
    {"texture2depth_multisampled2d", BuiltinType::kUndefined},
    {"texture_deptNyymultisampled_2d", BuiltinType::kUndefined},
    {"txtuOe_depth_mltisampled_2d", BuiltinType::kUndefined},
    {"textureErxueZPal", BuiltinType::kUndefined},
    {"exl22re_eddtereeal", BuiltinType::kUndefined},
    {"mextureVVter9al", BuiltinType::kUndefined},
    {"teIIture1multisampled_2", BuiltinType::kUndefined},
    {"texture_multisampled_2b", BuiltinType::kUndefined},
    {"texture_mi7isapled_zd", BuiltinType::kUndefined},
    {"texoure_storagii_1d", BuiltinType::kUndefined},
    {"exture_ntor5ge1d", BuiltinType::kUndefined},
    {"exture_storiSe_1d", BuiltinType::kUndefined},
    {"t22xue_storage_2d", BuiltinType::kUndefined},
    {"texture_Ct71rageGd", BuiltinType::kUndefined},
    {"textu8e_storageff2d", BuiltinType::kUndefined},
    {"texture_storag_2d_arry", BuiltinType::kUndefined},
    {"tJJxture_storage_2d_aSSray", BuiltinType::kUndefined},
    {"texte_st9rage_2d_array", BuiltinType::kUndefined},
    {"TbbJJxture_storage_3d", BuiltinType::kUndefined},
    {"t66ture_storag_3d", BuiltinType::kUndefined},
    {"textur66_stouage_3", BuiltinType::kUndefined},
    {"yW", BuiltinType::kUndefined},
    {"u", BuiltinType::kUndefined},
    {"u3", BuiltinType::kUndefined},
    {"ver2", BuiltinType::kUndefined},
    {"vecB", BuiltinType::kUndefined},
    {"vBB2", BuiltinType::kUndefined},
    {"vRc2f", BuiltinType::kUndefined},
    {"v2LL0", BuiltinType::kUndefined},
    {"vKOOf", BuiltinType::kUndefined},
    {"vgwch", BuiltinType::kUndefined},
    {"vLphh", BuiltinType::kUndefined},
    {"eiiEh", BuiltinType::kUndefined},
    {"ec2i", BuiltinType::kUndefined},
    {"UU882", BuiltinType::kUndefined},
    {"rrecvvi", BuiltinType::kUndefined},
    {"ecmm", BuiltinType::kUndefined},
    {"vec4j", BuiltinType::kUndefined},
    {"vec2X", BuiltinType::kUndefined},
    {"v8c3", BuiltinType::kUndefined},
    {"vEEvv", BuiltinType::kUndefined},
    {"99iz", BuiltinType::kUndefined},
    {"GGeJJA3f", BuiltinType::kUndefined},
    {"vess3f", BuiltinType::kUndefined},
    {"vPcKf", BuiltinType::kUndefined},
    {"tpc3h", BuiltinType::kUndefined},
    {"vec", BuiltinType::kUndefined},
    {"MMec3h", BuiltinType::kUndefined},
    {"vJJc30", BuiltinType::kUndefined},
    {"8c", BuiltinType::kUndefined},
    {"vecggKh", BuiltinType::kUndefined},
    {"vecfu", BuiltinType::kUndefined},
    {"vec37Q", BuiltinType::kUndefined},
    {"veY3u", BuiltinType::kUndefined},
    {"vSk", BuiltinType::kUndefined},
    {"ecn", BuiltinType::kUndefined},
    {"eFF", BuiltinType::kUndefined},
    {"GGIec4PP", BuiltinType::kUndefined},
    {"aeEE4", BuiltinType::kUndefined},
    {"ddBee4f", BuiltinType::kUndefined},
    {"c55McEh", BuiltinType::kUndefined},
    {"eKK", BuiltinType::kUndefined},
    {"vecRh", BuiltinType::kUndefined},
    {"v94D", BuiltinType::kUndefined},
    {"vMc4", BuiltinType::kUndefined},
    {"vecW077", BuiltinType::kUndefined},
    {"vec4I", BuiltinType::kUndefined},
    {"vd4u", BuiltinType::kUndefined},
    {"vc4u", BuiltinType::kUndefined},
};

using BuiltinTypeParseTest = testing::TestWithParam<Case>;

TEST_P(BuiltinTypeParseTest, Parse) {
    const char* string = GetParam().string;
    BuiltinType expect = GetParam().value;
    EXPECT_EQ(expect, ParseBuiltinType(string));
}

INSTANTIATE_TEST_SUITE_P(ValidCases, BuiltinTypeParseTest, testing::ValuesIn(kValidCases));
INSTANTIATE_TEST_SUITE_P(InvalidCases, BuiltinTypeParseTest, testing::ValuesIn(kInvalidCases));

using BuiltinTypePrintTest = testing::TestWithParam<Case>;

TEST_P(BuiltinTypePrintTest, Print) {
    BuiltinType value = GetParam().value;
    const char* expect = GetParam().string;
    EXPECT_EQ(expect, ToString(value));
}

INSTANTIATE_TEST_SUITE_P(ValidCases, BuiltinTypePrintTest, testing::ValuesIn(kValidCases));

}  // namespace parse_print_tests

}  // namespace
}  // namespace tint::core
