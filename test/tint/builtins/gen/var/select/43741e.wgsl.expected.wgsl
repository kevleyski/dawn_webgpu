fn select_43741e() {
  const arg_0 = vec4(1.0);
  const arg_1 = vec4(1.0);
  var arg_2 = vec4<bool>(true);
  var res = select(arg_0, arg_1, arg_2);
}

@fragment
fn fragment_main() {
  select_43741e();
}

@compute @workgroup_size(1)
fn compute_main() {
  select_43741e();
}

struct VertexOutput {
  @builtin(position)
  pos : vec4<f32>,
}

@vertex
fn vertex_main() -> VertexOutput {
  var out : VertexOutput;
  out.pos = vec4<f32>();
  select_43741e();
  return out;
}
