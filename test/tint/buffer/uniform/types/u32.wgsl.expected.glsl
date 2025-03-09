#version 310 es

layout(binding = 0, std140)
uniform u_block_1_ubo {
  uint inner;
} v;
layout(binding = 1, std430)
buffer s_block_1_ssbo {
  uint inner;
} v_1;
layout(local_size_x = 1, local_size_y = 1, local_size_z = 1) in;
void main() {
  uint x = v.inner;
  v_1.inner = x;
}
