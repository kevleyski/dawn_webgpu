//
// fragment_main
//
#version 310 es
precision highp float;
precision highp int;

layout(binding = 0, std430)
buffer f_prevent_dce_block_ssbo {
  ivec4 inner;
} v;
ivec4 insertBits_d86978() {
  ivec4 arg_0 = ivec4(1);
  ivec4 arg_1 = ivec4(1);
  uint arg_2 = 1u;
  uint arg_3 = 1u;
  ivec4 v_1 = arg_0;
  ivec4 v_2 = arg_1;
  uint v_3 = min(arg_2, 32u);
  uint v_4 = min(arg_3, (32u - v_3));
  int v_5 = int(v_3);
  ivec4 res = bitfieldInsert(v_1, v_2, v_5, int(v_4));
  return res;
}
void main() {
  v.inner = insertBits_d86978();
}
//
// compute_main
//
#version 310 es

layout(binding = 0, std430)
buffer prevent_dce_block_1_ssbo {
  ivec4 inner;
} v;
ivec4 insertBits_d86978() {
  ivec4 arg_0 = ivec4(1);
  ivec4 arg_1 = ivec4(1);
  uint arg_2 = 1u;
  uint arg_3 = 1u;
  ivec4 v_1 = arg_0;
  ivec4 v_2 = arg_1;
  uint v_3 = min(arg_2, 32u);
  uint v_4 = min(arg_3, (32u - v_3));
  int v_5 = int(v_3);
  ivec4 res = bitfieldInsert(v_1, v_2, v_5, int(v_4));
  return res;
}
layout(local_size_x = 1, local_size_y = 1, local_size_z = 1) in;
void main() {
  v.inner = insertBits_d86978();
}
//
// vertex_main
//
#version 310 es


struct VertexOutput {
  vec4 pos;
  ivec4 prevent_dce;
};

layout(location = 0) flat out ivec4 tint_interstage_location0;
ivec4 insertBits_d86978() {
  ivec4 arg_0 = ivec4(1);
  ivec4 arg_1 = ivec4(1);
  uint arg_2 = 1u;
  uint arg_3 = 1u;
  ivec4 v = arg_0;
  ivec4 v_1 = arg_1;
  uint v_2 = min(arg_2, 32u);
  uint v_3 = min(arg_3, (32u - v_2));
  int v_4 = int(v_2);
  ivec4 res = bitfieldInsert(v, v_1, v_4, int(v_3));
  return res;
}
VertexOutput vertex_main_inner() {
  VertexOutput v_5 = VertexOutput(vec4(0.0f), ivec4(0));
  v_5.pos = vec4(0.0f);
  v_5.prevent_dce = insertBits_d86978();
  return v_5;
}
void main() {
  VertexOutput v_6 = vertex_main_inner();
  gl_Position = vec4(v_6.pos.x, -(v_6.pos.y), ((2.0f * v_6.pos.z) - v_6.pos.w), v_6.pos.w);
  tint_interstage_location0 = v_6.prevent_dce;
  gl_PointSize = 1.0f;
}
