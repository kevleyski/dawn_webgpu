@group(1) @binding(0) var arg_0 : texture_storage_3d<r32sint, read_write>;

fn textureStore_24e6b7() {
  textureStore(arg_0, vec3<i32>(1i), vec4<i32>(1i));
}

@fragment
fn fragment_main() {
  textureStore_24e6b7();
}

@compute @workgroup_size(1)
fn compute_main() {
  textureStore_24e6b7();
}
