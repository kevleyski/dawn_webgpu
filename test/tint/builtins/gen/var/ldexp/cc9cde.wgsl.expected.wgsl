@group(0) @binding(0) var<storage, read_write> prevent_dce : vec4<f32>;

fn ldexp_cc9cde() -> vec4<f32> {
  var arg_0 = vec4<f32>(1.0f);
  var arg_1 = vec4<i32>(1i);
  var res : vec4<f32> = ldexp(arg_0, arg_1);
  return res;
}

@fragment
fn fragment_main() {
  prevent_dce = ldexp_cc9cde();
}

@compute @workgroup_size(1)
fn compute_main() {
  prevent_dce = ldexp_cc9cde();
}

struct VertexOutput {
  @builtin(position)
  pos : vec4<f32>,
  @location(0) @interpolate(flat)
  prevent_dce : vec4<f32>,
}

@vertex
fn vertex_main() -> VertexOutput {
  var out : VertexOutput;
  out.pos = vec4<f32>();
  out.prevent_dce = ldexp_cc9cde();
  return out;
}
