fn reflect_a8baf2() {
  var res = reflect(vec3(1.0), vec3(1.0));
}

@fragment
fn fragment_main() {
  reflect_a8baf2();
}

@compute @workgroup_size(1)
fn compute_main() {
  reflect_a8baf2();
}

struct VertexOutput {
  @builtin(position)
  pos : vec4<f32>,
}

@vertex
fn vertex_main() -> VertexOutput {
  var out : VertexOutput;
  out.pos = vec4<f32>();
  reflect_a8baf2();
  return out;
}
