//
// fragment_main
//
RWByteAddressBuffer prevent_dce : register(u0);

int4 subgroupXor_83b1f3() {
  int4 tint_tmp = (1).xxxx;
  int4 res = asint(WaveActiveBitXor(asuint(tint_tmp)));
  return res;
}

void fragment_main() {
  prevent_dce.Store4(0u, asuint(subgroupXor_83b1f3()));
  return;
}
//
// compute_main
//
RWByteAddressBuffer prevent_dce : register(u0);

int4 subgroupXor_83b1f3() {
  int4 tint_tmp = (1).xxxx;
  int4 res = asint(WaveActiveBitXor(asuint(tint_tmp)));
  return res;
}

[numthreads(1, 1, 1)]
void compute_main() {
  prevent_dce.Store4(0u, asuint(subgroupXor_83b1f3()));
  return;
}
