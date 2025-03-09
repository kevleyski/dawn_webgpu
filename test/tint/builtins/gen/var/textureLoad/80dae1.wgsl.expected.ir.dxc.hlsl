//
// fragment_main
//

RWByteAddressBuffer prevent_dce : register(u0);
RWTexture1D<int4> arg_0 : register(u0, space1);
int4 textureLoad_80dae1() {
  uint arg_1 = 1u;
  int4 res = arg_0.Load(int2(int(arg_1), int(0)));
  return res;
}

void fragment_main() {
  prevent_dce.Store4(0u, asuint(textureLoad_80dae1()));
}

//
// compute_main
//

RWByteAddressBuffer prevent_dce : register(u0);
RWTexture1D<int4> arg_0 : register(u0, space1);
int4 textureLoad_80dae1() {
  uint arg_1 = 1u;
  int4 res = arg_0.Load(int2(int(arg_1), int(0)));
  return res;
}

[numthreads(1, 1, 1)]
void compute_main() {
  prevent_dce.Store4(0u, asuint(textureLoad_80dae1()));
}

