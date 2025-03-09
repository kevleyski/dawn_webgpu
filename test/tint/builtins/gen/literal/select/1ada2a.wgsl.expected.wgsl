enable f16;

@group(0) @binding(0) var<storage, read_write> prevent_dce : vec3<f16>;

fn select_1ada2a() -> vec3<f16> {
  var res : vec3<f16> = select(vec3<f16>(1.0h), vec3<f16>(1.0h), true);
  return res;
}

@fragment
fn fragment_main() {
  prevent_dce = select_1ada2a();
}

@compute @workgroup_size(1)
fn compute_main() {
  prevent_dce = select_1ada2a();
}

struct VertexOutput {
  @builtin(position)
  pos : vec4<f32>,
  @location(0) @interpolate(flat)
  prevent_dce : vec3<f16>,
}

@vertex
fn vertex_main() -> VertexOutput {
  var out : VertexOutput;
  out.pos = vec4<f32>();
  out.prevent_dce = select_1ada2a();
  return out;
}
