#version 310 es
precision highp float;
precision highp int;

layout(binding = 0, std430)
buffer f_prevent_dce_block_ssbo {
  vec3 inner;
} v;
vec3 dpdxFine_f92fb6() {
  vec3 arg_0 = vec3(1.0f);
  vec3 res = dFdx(arg_0);
  return res;
}
void main() {
  v.inner = dpdxFine_f92fb6();
}
