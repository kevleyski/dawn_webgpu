enable f16;

@group(0) @binding(0) var<storage, read_write> prevent_dce : f32;

fn bitcast_23c8bd() -> f32 {
  var arg_0 = vec2<f16>(1.0h);
  var res : f32 = bitcast<f32>(arg_0);
  return res;
}

@fragment
fn fragment_main() {
  prevent_dce = bitcast_23c8bd();
}

@compute @workgroup_size(1)
fn compute_main() {
  prevent_dce = bitcast_23c8bd();
}

struct VertexOutput {
  @builtin(position)
  pos : vec4<f32>,
  @location(0) @interpolate(flat)
  prevent_dce : f32,
}

@vertex
fn vertex_main() -> VertexOutput {
  var out : VertexOutput;
  out.pos = vec4<f32>();
  out.prevent_dce = bitcast_23c8bd();
  return out;
}
