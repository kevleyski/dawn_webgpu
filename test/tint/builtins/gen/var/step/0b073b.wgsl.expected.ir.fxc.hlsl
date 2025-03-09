//
// fragment_main
//

RWByteAddressBuffer prevent_dce : register(u0);
float step_0b073b() {
  float arg_0 = 1.0f;
  float arg_1 = 1.0f;
  float res = step(arg_0, arg_1);
  return res;
}

void fragment_main() {
  prevent_dce.Store(0u, asuint(step_0b073b()));
}

//
// compute_main
//

RWByteAddressBuffer prevent_dce : register(u0);
float step_0b073b() {
  float arg_0 = 1.0f;
  float arg_1 = 1.0f;
  float res = step(arg_0, arg_1);
  return res;
}

[numthreads(1, 1, 1)]
void compute_main() {
  prevent_dce.Store(0u, asuint(step_0b073b()));
}

//
// vertex_main
//
struct VertexOutput {
  float4 pos;
  float prevent_dce;
};

struct vertex_main_outputs {
  nointerpolation float VertexOutput_prevent_dce : TEXCOORD0;
  float4 VertexOutput_pos : SV_Position;
};


float step_0b073b() {
  float arg_0 = 1.0f;
  float arg_1 = 1.0f;
  float res = step(arg_0, arg_1);
  return res;
}

VertexOutput vertex_main_inner() {
  VertexOutput v = (VertexOutput)0;
  v.pos = (0.0f).xxxx;
  v.prevent_dce = step_0b073b();
  VertexOutput v_1 = v;
  return v_1;
}

vertex_main_outputs vertex_main() {
  VertexOutput v_2 = vertex_main_inner();
  vertex_main_outputs v_3 = {v_2.prevent_dce, v_2.pos};
  return v_3;
}

