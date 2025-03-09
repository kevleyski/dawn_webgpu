//
// fragment_main
//
#version 310 es
precision highp float;
precision highp int;

layout(binding = 0, r32ui) uniform highp writeonly uimage3D f_arg_0;
void textureStore_cd6755() {
  imageStore(f_arg_0, ivec3(uvec3(1u)), uvec4(1u));
}
void main() {
  textureStore_cd6755();
}
//
// compute_main
//
#version 310 es

layout(binding = 0, r32ui) uniform highp writeonly uimage3D arg_0;
void textureStore_cd6755() {
  imageStore(arg_0, ivec3(uvec3(1u)), uvec4(1u));
}
layout(local_size_x = 1, local_size_y = 1, local_size_z = 1) in;
void main() {
  textureStore_cd6755();
}
