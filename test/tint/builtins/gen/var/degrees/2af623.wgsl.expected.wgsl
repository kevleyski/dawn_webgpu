@group(0) @binding(0) var<storage, read_write> prevent_dce : vec3<f32>;

fn degrees_2af623() -> vec3<f32> {
  var arg_0 = vec3<f32>(1.0f);
  var res : vec3<f32> = degrees(arg_0);
  return res;
}

@fragment
fn fragment_main() {
  prevent_dce = degrees_2af623();
}

@compute @workgroup_size(1)
fn compute_main() {
  prevent_dce = degrees_2af623();
}

struct VertexOutput {
  @builtin(position)
  pos : vec4<f32>,
  @location(0) @interpolate(flat)
  prevent_dce : vec3<f32>,
}

@vertex
fn vertex_main() -> VertexOutput {
  var out : VertexOutput;
  out.pos = vec4<f32>();
  out.prevent_dce = degrees_2af623();
  return out;
}
