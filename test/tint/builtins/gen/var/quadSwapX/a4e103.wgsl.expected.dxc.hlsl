//
// fragment_main
//
RWByteAddressBuffer prevent_dce : register(u0);

float16_t quadSwapX_a4e103() {
  float16_t arg_0 = float16_t(1.0h);
  float16_t res = QuadReadAcrossX(arg_0);
  return res;
}

void fragment_main() {
  prevent_dce.Store<float16_t>(0u, quadSwapX_a4e103());
  return;
}
//
// compute_main
//
RWByteAddressBuffer prevent_dce : register(u0);

float16_t quadSwapX_a4e103() {
  float16_t arg_0 = float16_t(1.0h);
  float16_t res = QuadReadAcrossX(arg_0);
  return res;
}

[numthreads(1, 1, 1)]
void compute_main() {
  prevent_dce.Store<float16_t>(0u, quadSwapX_a4e103());
  return;
}
