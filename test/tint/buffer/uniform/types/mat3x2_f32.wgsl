@group(0) @binding(0) var<uniform> u : mat3x2<f32>;
@group(0) @binding(1) var<storage, read_write> s: mat3x2<f32>;

@compute @workgroup_size(1)
fn main() {
  let x = u;

  s = x;
}
