@group(0) @binding(0) var<storage, read_write> prevent_dce : i32;

fn any_0e3e58() -> i32 {
  var arg_0 = vec2<bool>(true);
  var res : bool = any(arg_0);
  return select(0, 1, all((res == bool())));
}

@fragment
fn fragment_main() {
  prevent_dce = any_0e3e58();
}

@compute @workgroup_size(1)
fn compute_main() {
  prevent_dce = any_0e3e58();
}

struct VertexOutput {
  @builtin(position)
  pos : vec4<f32>,
  @location(0) @interpolate(flat)
  prevent_dce : i32,
}

@vertex
fn vertex_main() -> VertexOutput {
  var out : VertexOutput;
  out.pos = vec4<f32>();
  out.prevent_dce = any_0e3e58();
  return out;
}
