//
// fragment_main
//

RWByteAddressBuffer prevent_dce : register(u0);
float4 refract_7e02e6() {
  float4 arg_0 = (1.0f).xxxx;
  float4 arg_1 = (1.0f).xxxx;
  float arg_2 = 1.0f;
  float4 res = refract(arg_0, arg_1, arg_2);
  return res;
}

void fragment_main() {
  prevent_dce.Store4(0u, asuint(refract_7e02e6()));
}

//
// compute_main
//

RWByteAddressBuffer prevent_dce : register(u0);
float4 refract_7e02e6() {
  float4 arg_0 = (1.0f).xxxx;
  float4 arg_1 = (1.0f).xxxx;
  float arg_2 = 1.0f;
  float4 res = refract(arg_0, arg_1, arg_2);
  return res;
}

[numthreads(1, 1, 1)]
void compute_main() {
  prevent_dce.Store4(0u, asuint(refract_7e02e6()));
}

//
// vertex_main
//
struct VertexOutput {
  float4 pos;
  float4 prevent_dce;
};

struct vertex_main_outputs {
  nointerpolation float4 VertexOutput_prevent_dce : TEXCOORD0;
  float4 VertexOutput_pos : SV_Position;
};


float4 refract_7e02e6() {
  float4 arg_0 = (1.0f).xxxx;
  float4 arg_1 = (1.0f).xxxx;
  float arg_2 = 1.0f;
  float4 res = refract(arg_0, arg_1, arg_2);
  return res;
}

VertexOutput vertex_main_inner() {
  VertexOutput v = (VertexOutput)0;
  v.pos = (0.0f).xxxx;
  v.prevent_dce = refract_7e02e6();
  VertexOutput v_1 = v;
  return v_1;
}

vertex_main_outputs vertex_main() {
  VertexOutput v_2 = vertex_main_inner();
  vertex_main_outputs v_3 = {v_2.prevent_dce, v_2.pos};
  return v_3;
}

