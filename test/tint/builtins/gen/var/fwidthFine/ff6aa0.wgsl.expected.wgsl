@group(0) @binding(0) var<storage, read_write> prevent_dce : vec2<f32>;

fn fwidthFine_ff6aa0() -> vec2<f32> {
  var arg_0 = vec2<f32>(1.0f);
  var res : vec2<f32> = fwidthFine(arg_0);
  return res;
}

@fragment
fn fragment_main() {
  prevent_dce = fwidthFine_ff6aa0();
}
