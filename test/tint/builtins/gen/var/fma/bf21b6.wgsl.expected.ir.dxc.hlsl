//
// fragment_main
//

RWByteAddressBuffer prevent_dce : register(u0);
vector<float16_t, 2> fma_bf21b6() {
  vector<float16_t, 2> arg_0 = (float16_t(1.0h)).xx;
  vector<float16_t, 2> arg_1 = (float16_t(1.0h)).xx;
  vector<float16_t, 2> arg_2 = (float16_t(1.0h)).xx;
  vector<float16_t, 2> res = mad(arg_0, arg_1, arg_2);
  return res;
}

void fragment_main() {
  prevent_dce.Store<vector<float16_t, 2> >(0u, fma_bf21b6());
}

//
// compute_main
//

RWByteAddressBuffer prevent_dce : register(u0);
vector<float16_t, 2> fma_bf21b6() {
  vector<float16_t, 2> arg_0 = (float16_t(1.0h)).xx;
  vector<float16_t, 2> arg_1 = (float16_t(1.0h)).xx;
  vector<float16_t, 2> arg_2 = (float16_t(1.0h)).xx;
  vector<float16_t, 2> res = mad(arg_0, arg_1, arg_2);
  return res;
}

[numthreads(1, 1, 1)]
void compute_main() {
  prevent_dce.Store<vector<float16_t, 2> >(0u, fma_bf21b6());
}

//
// vertex_main
//
struct VertexOutput {
  float4 pos;
  vector<float16_t, 2> prevent_dce;
};

struct vertex_main_outputs {
  nointerpolation vector<float16_t, 2> VertexOutput_prevent_dce : TEXCOORD0;
  float4 VertexOutput_pos : SV_Position;
};


vector<float16_t, 2> fma_bf21b6() {
  vector<float16_t, 2> arg_0 = (float16_t(1.0h)).xx;
  vector<float16_t, 2> arg_1 = (float16_t(1.0h)).xx;
  vector<float16_t, 2> arg_2 = (float16_t(1.0h)).xx;
  vector<float16_t, 2> res = mad(arg_0, arg_1, arg_2);
  return res;
}

VertexOutput vertex_main_inner() {
  VertexOutput v = (VertexOutput)0;
  v.pos = (0.0f).xxxx;
  v.prevent_dce = fma_bf21b6();
  VertexOutput v_1 = v;
  return v_1;
}

vertex_main_outputs vertex_main() {
  VertexOutput v_2 = vertex_main_inner();
  vertex_main_outputs v_3 = {v_2.prevent_dce, v_2.pos};
  return v_3;
}

