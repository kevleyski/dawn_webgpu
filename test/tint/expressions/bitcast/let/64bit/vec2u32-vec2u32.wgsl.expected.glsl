#version 310 es

layout(local_size_x = 1, local_size_y = 1, local_size_z = 1) in;
void main() {
  uvec2 a = uvec2(1073757184u, 3288351232u);
  uvec2 b = a;
}
