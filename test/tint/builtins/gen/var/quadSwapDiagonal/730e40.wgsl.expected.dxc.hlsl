//
// fragment_main
//
RWByteAddressBuffer prevent_dce : register(u0);

uint quadSwapDiagonal_730e40() {
  uint arg_0 = 1u;
  uint res = QuadReadAcrossDiagonal(arg_0);
  return res;
}

void fragment_main() {
  prevent_dce.Store(0u, asuint(quadSwapDiagonal_730e40()));
  return;
}
//
// compute_main
//
RWByteAddressBuffer prevent_dce : register(u0);

uint quadSwapDiagonal_730e40() {
  uint arg_0 = 1u;
  uint res = QuadReadAcrossDiagonal(arg_0);
  return res;
}

[numthreads(1, 1, 1)]
void compute_main() {
  prevent_dce.Store(0u, asuint(quadSwapDiagonal_730e40()));
  return;
}
