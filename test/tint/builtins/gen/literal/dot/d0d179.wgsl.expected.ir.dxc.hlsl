//
// fragment_main
//

RWByteAddressBuffer prevent_dce : register(u0);
float16_t dot_d0d179() {
  float16_t res = float16_t(4.0h);
  return res;
}

void fragment_main() {
  prevent_dce.Store<float16_t>(0u, dot_d0d179());
}

//
// compute_main
//

RWByteAddressBuffer prevent_dce : register(u0);
float16_t dot_d0d179() {
  float16_t res = float16_t(4.0h);
  return res;
}

[numthreads(1, 1, 1)]
void compute_main() {
  prevent_dce.Store<float16_t>(0u, dot_d0d179());
}

//
// vertex_main
//
struct VertexOutput {
  float4 pos;
  float16_t prevent_dce;
};

struct vertex_main_outputs {
  nointerpolation float16_t VertexOutput_prevent_dce : TEXCOORD0;
  float4 VertexOutput_pos : SV_Position;
};


float16_t dot_d0d179() {
  float16_t res = float16_t(4.0h);
  return res;
}

VertexOutput vertex_main_inner() {
  VertexOutput v = (VertexOutput)0;
  v.pos = (0.0f).xxxx;
  v.prevent_dce = dot_d0d179();
  VertexOutput v_1 = v;
  return v_1;
}

vertex_main_outputs vertex_main() {
  VertexOutput v_2 = vertex_main_inner();
  vertex_main_outputs v_3 = {v_2.prevent_dce, v_2.pos};
  return v_3;
}

