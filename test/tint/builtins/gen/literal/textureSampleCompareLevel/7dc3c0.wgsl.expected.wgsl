@group(0) @binding(0) var<storage, read_write> prevent_dce : f32;

@group(1) @binding(0) var arg_0 : texture_depth_2d_array;

@group(1) @binding(1) var arg_1 : sampler_comparison;

fn textureSampleCompareLevel_7dc3c0() -> f32 {
  var res : f32 = textureSampleCompareLevel(arg_0, arg_1, vec2<f32>(1.0f), 1u, 1.0f);
  return res;
}

@fragment
fn fragment_main() {
  prevent_dce = textureSampleCompareLevel_7dc3c0();
}

@compute @workgroup_size(1)
fn compute_main() {
  prevent_dce = textureSampleCompareLevel_7dc3c0();
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
  out.prevent_dce = textureSampleCompareLevel_7dc3c0();
  return out;
}
