//
// fragment_main
//
RWByteAddressBuffer prevent_dce : register(u0);
Texture2DArray<int4> arg_0 : register(t0, space1);

uint2 textureDimensions_e4e310() {
  uint4 tint_tmp;
  arg_0.GetDimensions(1u, tint_tmp.x, tint_tmp.y, tint_tmp.z, tint_tmp.w);
  uint2 res = tint_tmp.xy;
  return res;
}

void fragment_main() {
  prevent_dce.Store2(0u, asuint(textureDimensions_e4e310()));
  return;
}
//
// compute_main
//
RWByteAddressBuffer prevent_dce : register(u0);
Texture2DArray<int4> arg_0 : register(t0, space1);

uint2 textureDimensions_e4e310() {
  uint4 tint_tmp;
  arg_0.GetDimensions(1u, tint_tmp.x, tint_tmp.y, tint_tmp.z, tint_tmp.w);
  uint2 res = tint_tmp.xy;
  return res;
}

[numthreads(1, 1, 1)]
void compute_main() {
  prevent_dce.Store2(0u, asuint(textureDimensions_e4e310()));
  return;
}
//
// vertex_main
//
Texture2DArray<int4> arg_0 : register(t0, space1);

uint2 textureDimensions_e4e310() {
  uint4 tint_tmp;
  arg_0.GetDimensions(1u, tint_tmp.x, tint_tmp.y, tint_tmp.z, tint_tmp.w);
  uint2 res = tint_tmp.xy;
  return res;
}

struct VertexOutput {
  float4 pos;
  uint2 prevent_dce;
};
struct tint_symbol_1 {
  nointerpolation uint2 prevent_dce : TEXCOORD0;
  float4 pos : SV_Position;
};

VertexOutput vertex_main_inner() {
  VertexOutput tint_symbol = (VertexOutput)0;
  tint_symbol.pos = (0.0f).xxxx;
  tint_symbol.prevent_dce = textureDimensions_e4e310();
  return tint_symbol;
}

tint_symbol_1 vertex_main() {
  VertexOutput inner_result = vertex_main_inner();
  tint_symbol_1 wrapper_result = (tint_symbol_1)0;
  wrapper_result.pos = inner_result.pos;
  wrapper_result.prevent_dce = inner_result.prevent_dce;
  return wrapper_result;
}
