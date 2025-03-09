@group(0) @binding(0) var<storage, read_write> prevent_dce : u32;

fn pack4xU8Clamp_6b8c1b() -> u32 {
  var arg_0 = vec4<u32>(1u);
  var res : u32 = pack4xU8Clamp(arg_0);
  return res;
}

@fragment
fn fragment_main() {
  prevent_dce = pack4xU8Clamp_6b8c1b();
}

@compute @workgroup_size(1)
fn compute_main() {
  prevent_dce = pack4xU8Clamp_6b8c1b();
}

struct VertexOutput {
  @builtin(position)
  pos : vec4<f32>,
  @location(0) @interpolate(flat)
  prevent_dce : u32,
}

@vertex
fn vertex_main() -> VertexOutput {
  var out : VertexOutput;
  out.pos = vec4<f32>();
  out.prevent_dce = pack4xU8Clamp_6b8c1b();
  return out;
}
