SKIP: INVALID


RWByteAddressBuffer prevent_dce : register(u0);
uint3 subgroupExclusiveMul_f039f4() {
  uint3 arg_0 = (1u).xxx;
  uint3 res = WavePrefixProduct(arg_0);
  return res;
}

void fragment_main() {
  prevent_dce.Store3(0u, subgroupExclusiveMul_f039f4());
}

[numthreads(1, 1, 1)]
void compute_main() {
  prevent_dce.Store3(0u, subgroupExclusiveMul_f039f4());
}

FXC validation failure:
<scrubbed_path>(5,15-38): error X3004: undeclared identifier 'WavePrefixProduct'


tint executable returned error: exit status 1
