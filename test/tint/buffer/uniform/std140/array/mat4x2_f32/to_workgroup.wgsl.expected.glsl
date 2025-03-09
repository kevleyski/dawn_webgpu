#version 310 es


struct mat4x2_f32_std140 {
  vec2 col0;
  vec2 col1;
  vec2 col2;
  vec2 col3;
};

layout(binding = 0, std140)
uniform u_block_std140_1_ubo {
  mat4x2_f32_std140 inner[4];
} v;
shared mat4x2 w[4];
void f_inner(uint tint_local_index) {
  {
    uint v_1 = 0u;
    v_1 = tint_local_index;
    while(true) {
      uint v_2 = v_1;
      if ((v_2 >= 4u)) {
        break;
      }
      w[v_2] = mat4x2(vec2(0.0f), vec2(0.0f), vec2(0.0f), vec2(0.0f));
      {
        v_1 = (v_2 + 1u);
      }
      continue;
    }
  }
  barrier();
  mat4x2_f32_std140 v_3[4] = v.inner;
  mat4x2 v_4[4] = mat4x2[4](mat4x2(vec2(0.0f), vec2(0.0f), vec2(0.0f), vec2(0.0f)), mat4x2(vec2(0.0f), vec2(0.0f), vec2(0.0f), vec2(0.0f)), mat4x2(vec2(0.0f), vec2(0.0f), vec2(0.0f), vec2(0.0f)), mat4x2(vec2(0.0f), vec2(0.0f), vec2(0.0f), vec2(0.0f)));
  {
    uint v_5 = 0u;
    v_5 = 0u;
    while(true) {
      uint v_6 = v_5;
      if ((v_6 >= 4u)) {
        break;
      }
      v_4[v_6] = mat4x2(v_3[v_6].col0, v_3[v_6].col1, v_3[v_6].col2, v_3[v_6].col3);
      {
        v_5 = (v_6 + 1u);
      }
      continue;
    }
  }
  w = v_4;
  w[1u] = mat4x2(v.inner[2u].col0, v.inner[2u].col1, v.inner[2u].col2, v.inner[2u].col3);
  w[1u][0u] = v.inner[0u].col1.yx;
  w[1u][0u].x = v.inner[0u].col1.x;
}
layout(local_size_x = 1, local_size_y = 1, local_size_z = 1) in;
void main() {
  f_inner(gl_LocalInvocationIndex);
}
