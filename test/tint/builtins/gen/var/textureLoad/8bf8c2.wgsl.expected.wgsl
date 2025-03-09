@group(0) @binding(0) var<storage, read_write> prevent_dce : vec4<f32>;

@group(1) @binding(0) var arg_0 : texture_storage_1d<r32float, read_write>;

fn textureLoad_8bf8c2() -> vec4<f32> {
  var arg_1 = 1u;
  var res : vec4<f32> = textureLoad(arg_0, arg_1);
  return res;
}

@fragment
fn fragment_main() {
  prevent_dce = textureLoad_8bf8c2();
}

@compute @workgroup_size(1)
fn compute_main() {
  prevent_dce = textureLoad_8bf8c2();
}
