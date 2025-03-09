@group(0) @binding(0) var<storage, read_write> prevent_dce : vec2<f32>;

fn ldexp_a22679() -> vec2<f32> {
  var res : vec2<f32> = ldexp(vec2<f32>(1.0f), vec2(1));
  return res;
}

@fragment
fn fragment_main() {
  prevent_dce = ldexp_a22679();
}

@compute @workgroup_size(1)
fn compute_main() {
  prevent_dce = ldexp_a22679();
}

struct VertexOutput {
  @builtin(position)
  pos : vec4<f32>,
  @location(0) @interpolate(flat)
  prevent_dce : vec2<f32>,
}

@vertex
fn vertex_main() -> VertexOutput {
  var out : VertexOutput;
  out.pos = vec4<f32>();
  out.prevent_dce = ldexp_a22679();
  return out;
}
