SKIP: INVALID

RWByteAddressBuffer prevent_dce : register(u0);

int subgroupAnd_c6fc92() {
  int arg_0 = 1;
  int res = asint(WaveActiveBitAnd(asuint(arg_0)));
  return res;
}

void fragment_main() {
  prevent_dce.Store(0u, asuint(subgroupAnd_c6fc92()));
  return;
}

[numthreads(1, 1, 1)]
void compute_main() {
  prevent_dce.Store(0u, asuint(subgroupAnd_c6fc92()));
  return;
}
FXC validation failure:
<scrubbed_path>(5,19-49): error X3004: undeclared identifier 'WaveActiveBitAnd'


tint executable returned error: exit status 1
