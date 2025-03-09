//
// fragment_main
//
#version 310 es
precision highp float;
precision highp int;


struct modf_result_vec4_f32 {
  vec4 member_0;
  vec4 whole;
};

void modf_f3d1f9() {
  modf_result_vec4_f32 res = modf_result_vec4_f32(vec4(-0.5f), vec4(-1.0f));
}
void main() {
  modf_f3d1f9();
}
//
// compute_main
//
#version 310 es


struct modf_result_vec4_f32 {
  vec4 member_0;
  vec4 whole;
};

void modf_f3d1f9() {
  modf_result_vec4_f32 res = modf_result_vec4_f32(vec4(-0.5f), vec4(-1.0f));
}
layout(local_size_x = 1, local_size_y = 1, local_size_z = 1) in;
void main() {
  modf_f3d1f9();
}
//
// vertex_main
//
#version 310 es


struct modf_result_vec4_f32 {
  vec4 member_0;
  vec4 whole;
};

struct VertexOutput {
  vec4 pos;
};

void modf_f3d1f9() {
  modf_result_vec4_f32 res = modf_result_vec4_f32(vec4(-0.5f), vec4(-1.0f));
}
VertexOutput vertex_main_inner() {
  VertexOutput v = VertexOutput(vec4(0.0f));
  v.pos = vec4(0.0f);
  modf_f3d1f9();
  return v;
}
void main() {
  vec4 v_1 = vertex_main_inner().pos;
  gl_Position = vec4(v_1.x, -(v_1.y), ((2.0f * v_1.z) - v_1.w), v_1.w);
  gl_PointSize = 1.0f;
}
