#version 310 es

float arr[2][2] = float[2][2](float[2](1.0f, 2.0f), float[2](3.0f, 4.0f));
void f() {
  float v[2][2] = arr;
}
layout(local_size_x = 1, local_size_y = 1, local_size_z = 1) in;
void main() {
}
