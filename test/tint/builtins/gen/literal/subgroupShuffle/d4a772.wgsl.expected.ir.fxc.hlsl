SKIP: INVALID


RWByteAddressBuffer prevent_dce : register(u0);
int subgroupShuffle_d4a772() {
  int res = WaveReadLaneAt(int(1), 1u);
  return res;
}

void fragment_main() {
  prevent_dce.Store(0u, asuint(subgroupShuffle_d4a772()));
}

[numthreads(1, 1, 1)]
void compute_main() {
  prevent_dce.Store(0u, asuint(subgroupShuffle_d4a772()));
}

FXC validation failure:
<scrubbed_path>(4,13-38): error X3004: undeclared identifier 'WaveReadLaneAt'


tint executable returned error: exit status 1
