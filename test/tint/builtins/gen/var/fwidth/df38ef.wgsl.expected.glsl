#version 310 es
precision highp float;
precision highp int;

layout(binding = 0, std430)
buffer f_prevent_dce_block_ssbo {
  float inner;
} v;
float fwidth_df38ef() {
  float arg_0 = 1.0f;
  float res = fwidth(arg_0);
  return res;
}
void main() {
  v.inner = fwidth_df38ef();
}
