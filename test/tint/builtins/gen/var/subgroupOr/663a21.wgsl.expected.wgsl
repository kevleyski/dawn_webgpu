enable subgroups;

@group(0) @binding(0) var<storage, read_write> prevent_dce : vec3<u32>;

fn subgroupOr_663a21() -> vec3<u32> {
  var arg_0 = vec3<u32>(1u);
  var res : vec3<u32> = subgroupOr(arg_0);
  return res;
}

@fragment
fn fragment_main() {
  prevent_dce = subgroupOr_663a21();
}

@compute @workgroup_size(1)
fn compute_main() {
  prevent_dce = subgroupOr_663a21();
}
