@group(1) @binding(0) var arg_0 : texture_storage_2d<rg32uint, read_write>;

fn textureStore_8a8681() {
  textureStore(arg_0, vec2<u32>(1u), vec4<u32>(1u));
}

@fragment
fn fragment_main() {
  textureStore_8a8681();
}

@compute @workgroup_size(1)
fn compute_main() {
  textureStore_8a8681();
}
