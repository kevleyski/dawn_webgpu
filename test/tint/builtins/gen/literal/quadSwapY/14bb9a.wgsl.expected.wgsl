enable subgroups;

@group(0) @binding(0) var<storage, read_write> prevent_dce : vec4<i32>;

fn quadSwapY_14bb9a() -> vec4<i32> {
  var res : vec4<i32> = quadSwapY(vec4<i32>(1i));
  return res;
}

@fragment
fn fragment_main() {
  prevent_dce = quadSwapY_14bb9a();
}

@compute @workgroup_size(1)
fn compute_main() {
  prevent_dce = quadSwapY_14bb9a();
}
