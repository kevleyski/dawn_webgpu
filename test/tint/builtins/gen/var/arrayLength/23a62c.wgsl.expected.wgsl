@group(0) @binding(0) var<storage, read_write> prevent_dce : u32;

struct SB_RW {
  arg_0 : array<u32>,
}

@group(0) @binding(1) var<storage, read_write> sb_rw : SB_RW;

fn arrayLength_23a62c() -> u32 {
  var res : u32 = arrayLength(&(sb_rw.arg_0));
  return res;
}

@fragment
fn fragment_main() {
  prevent_dce = arrayLength_23a62c();
}

@compute @workgroup_size(1)
fn compute_main() {
  prevent_dce = arrayLength_23a62c();
}
