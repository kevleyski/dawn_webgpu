fn transpose_553e90() {
  const arg_0 = mat4x2(1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0);
  var res = transpose(arg_0);
}

@fragment
fn fragment_main() {
  transpose_553e90();
}

@compute @workgroup_size(1)
fn compute_main() {
  transpose_553e90();
}

struct VertexOutput {
  @builtin(position)
  pos : vec4<f32>,
}

@vertex
fn vertex_main() -> VertexOutput {
  var out : VertexOutput;
  out.pos = vec4<f32>();
  transpose_553e90();
  return out;
}
