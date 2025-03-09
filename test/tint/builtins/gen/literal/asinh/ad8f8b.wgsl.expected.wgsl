enable f16;

@group(0) @binding(0) var<storage, read_write> prevent_dce : vec2<f16>;

fn asinh_ad8f8b() -> vec2<f16> {
  var res : vec2<f16> = asinh(vec2<f16>(1.0h));
  return res;
}

@fragment
fn fragment_main() {
  prevent_dce = asinh_ad8f8b();
}

@compute @workgroup_size(1)
fn compute_main() {
  prevent_dce = asinh_ad8f8b();
}

struct VertexOutput {
  @builtin(position)
  pos : vec4<f32>,
  @location(0) @interpolate(flat)
  prevent_dce : vec2<f16>,
}

@vertex
fn vertex_main() -> VertexOutput {
  var out : VertexOutput;
  out.pos = vec4<f32>();
  out.prevent_dce = asinh_ad8f8b();
  return out;
}
