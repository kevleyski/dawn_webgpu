fn ceil_11b1dc() {
  var res = ceil(vec4(1.5));
}

@fragment
fn fragment_main() {
  ceil_11b1dc();
}

@compute @workgroup_size(1)
fn compute_main() {
  ceil_11b1dc();
}

struct VertexOutput {
  @builtin(position)
  pos : vec4<f32>,
}

@vertex
fn vertex_main() -> VertexOutput {
  var out : VertexOutput;
  out.pos = vec4<f32>();
  ceil_11b1dc();
  return out;
}
