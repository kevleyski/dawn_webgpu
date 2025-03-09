//
// fragment_main
//
#version 310 es
precision highp float;
precision highp int;

layout(binding = 0, std430)
buffer f_prevent_dce_block_ssbo {
  vec4 inner;
} v;
vec4 ldexp_cc9cde() {
  vec4 arg_0 = vec4(1.0f);
  ivec4 arg_1 = ivec4(1);
  vec4 res = ldexp(arg_0, arg_1);
  return res;
}
void main() {
  v.inner = ldexp_cc9cde();
}
//
// compute_main
//
#version 310 es

layout(binding = 0, std430)
buffer prevent_dce_block_1_ssbo {
  vec4 inner;
} v;
vec4 ldexp_cc9cde() {
  vec4 arg_0 = vec4(1.0f);
  ivec4 arg_1 = ivec4(1);
  vec4 res = ldexp(arg_0, arg_1);
  return res;
}
layout(local_size_x = 1, local_size_y = 1, local_size_z = 1) in;
void main() {
  v.inner = ldexp_cc9cde();
}
//
// vertex_main
//
#version 310 es


struct VertexOutput {
  vec4 pos;
  vec4 prevent_dce;
};

layout(location = 0) flat out vec4 tint_interstage_location0;
vec4 ldexp_cc9cde() {
  vec4 arg_0 = vec4(1.0f);
  ivec4 arg_1 = ivec4(1);
  vec4 res = ldexp(arg_0, arg_1);
  return res;
}
VertexOutput vertex_main_inner() {
  VertexOutput v = VertexOutput(vec4(0.0f), vec4(0.0f));
  v.pos = vec4(0.0f);
  v.prevent_dce = ldexp_cc9cde();
  return v;
}
void main() {
  VertexOutput v_1 = vertex_main_inner();
  gl_Position = vec4(v_1.pos.x, -(v_1.pos.y), ((2.0f * v_1.pos.z) - v_1.pos.w), v_1.pos.w);
  tint_interstage_location0 = v_1.prevent_dce;
  gl_PointSize = 1.0f;
}
