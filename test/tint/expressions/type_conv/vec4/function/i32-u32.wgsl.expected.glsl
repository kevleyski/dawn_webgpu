#version 310 es

int t = 0;
ivec4 m() {
  t = 1;
  return ivec4(t);
}
void f() {
  uvec4 v = uvec4(m());
}
layout(local_size_x = 1, local_size_y = 1, local_size_z = 1) in;
void main() {
}
