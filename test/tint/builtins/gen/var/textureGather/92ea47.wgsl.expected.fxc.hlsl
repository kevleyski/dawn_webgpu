//
// fragment_main
//
RWByteAddressBuffer prevent_dce : register(u0);
Texture2DArray<uint4> arg_1 : register(t1, space1);
SamplerState arg_2 : register(s2, space1);

uint4 textureGather_92ea47() {
  float2 arg_3 = (1.0f).xx;
  int arg_4 = 1;
  uint4 res = arg_1.GatherGreen(arg_2, float3(arg_3, float(arg_4)));
  return res;
}

void fragment_main() {
  prevent_dce.Store4(0u, asuint(textureGather_92ea47()));
  return;
}
//
// compute_main
//
RWByteAddressBuffer prevent_dce : register(u0);
Texture2DArray<uint4> arg_1 : register(t1, space1);
SamplerState arg_2 : register(s2, space1);

uint4 textureGather_92ea47() {
  float2 arg_3 = (1.0f).xx;
  int arg_4 = 1;
  uint4 res = arg_1.GatherGreen(arg_2, float3(arg_3, float(arg_4)));
  return res;
}

[numthreads(1, 1, 1)]
void compute_main() {
  prevent_dce.Store4(0u, asuint(textureGather_92ea47()));
  return;
}
//
// vertex_main
//
Texture2DArray<uint4> arg_1 : register(t1, space1);
SamplerState arg_2 : register(s2, space1);

uint4 textureGather_92ea47() {
  float2 arg_3 = (1.0f).xx;
  int arg_4 = 1;
  uint4 res = arg_1.GatherGreen(arg_2, float3(arg_3, float(arg_4)));
  return res;
}

struct VertexOutput {
  float4 pos;
  uint4 prevent_dce;
};
struct tint_symbol_1 {
  nointerpolation uint4 prevent_dce : TEXCOORD0;
  float4 pos : SV_Position;
};

VertexOutput vertex_main_inner() {
  VertexOutput tint_symbol = (VertexOutput)0;
  tint_symbol.pos = (0.0f).xxxx;
  tint_symbol.prevent_dce = textureGather_92ea47();
  return tint_symbol;
}

tint_symbol_1 vertex_main() {
  VertexOutput inner_result = vertex_main_inner();
  tint_symbol_1 wrapper_result = (tint_symbol_1)0;
  wrapper_result.pos = inner_result.pos;
  wrapper_result.prevent_dce = inner_result.prevent_dce;
  return wrapper_result;
}
