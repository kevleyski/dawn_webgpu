enable subgroups;

@group(0) @binding(0) var<storage, read_write> prevent_dce : i32;

fn subgroupMax_6c913e() -> i32 {
  var res : i32 = subgroupMax(1i);
  return res;
}

@fragment
fn fragment_main() {
  prevent_dce = subgroupMax_6c913e();
}

@compute @workgroup_size(1)
fn compute_main() {
  prevent_dce = subgroupMax_6c913e();
}
