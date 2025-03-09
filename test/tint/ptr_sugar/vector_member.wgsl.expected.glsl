#version 310 es

void deref() {
  ivec3 a = ivec3(0);
  int b = a.x;
  a.x = 42;
}
void no_deref() {
  ivec3 a = ivec3(0);
  int b = a.x;
  a.x = 42;
}
layout(local_size_x = 1, local_size_y = 1, local_size_z = 1) in;
void main() {
  deref();
  no_deref();
}
