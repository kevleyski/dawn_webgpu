fn abs_5a8af1() {
  var res = abs(1);
}

@fragment
fn fragment_main() {
  abs_5a8af1();
}

@compute @workgroup_size(1)
fn compute_main() {
  abs_5a8af1();
}

struct VertexOutput {
  @builtin(position)
  pos : vec4<f32>,
}

@vertex
fn vertex_main() -> VertexOutput {
  var out : VertexOutput;
  out.pos = vec4<f32>();
  abs_5a8af1();
  return out;
}
