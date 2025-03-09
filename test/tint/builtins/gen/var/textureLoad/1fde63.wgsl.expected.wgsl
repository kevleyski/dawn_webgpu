enable chromium_internal_graphite;

@group(0) @binding(0) var<storage, read_write> prevent_dce : vec4<f32>;

@group(1) @binding(0) var arg_0 : texture_storage_3d<r8unorm, read_write>;

fn textureLoad_1fde63() -> vec4<f32> {
  var arg_1 = vec3<u32>(1u);
  var res : vec4<f32> = textureLoad(arg_0, arg_1);
  return res;
}

@fragment
fn fragment_main() {
  prevent_dce = textureLoad_1fde63();
}

@compute @workgroup_size(1)
fn compute_main() {
  prevent_dce = textureLoad_1fde63();
}
