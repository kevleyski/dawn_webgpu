//
// fragment_main
//
int tint_count_leading_zeros(int v) {
  uint x = uint(v);
  uint b16 = ((x <= 65535u) ? 16u : 0u);
  x = (x << b16);
  uint b8 = ((x <= 16777215u) ? 8u : 0u);
  x = (x << b8);
  uint b4 = ((x <= 268435455u) ? 4u : 0u);
  x = (x << b4);
  uint b2 = ((x <= 1073741823u) ? 2u : 0u);
  x = (x << b2);
  uint b1 = ((x <= 2147483647u) ? 1u : 0u);
  uint is_zero = ((x == 0u) ? 1u : 0u);
  return int((((((b16 | b8) | b4) | b2) | b1) + is_zero));
}

RWByteAddressBuffer prevent_dce : register(u0);

int countLeadingZeros_6d4656() {
  int arg_0 = 1;
  int res = tint_count_leading_zeros(arg_0);
  return res;
}

void fragment_main() {
  prevent_dce.Store(0u, asuint(countLeadingZeros_6d4656()));
  return;
}
//
// compute_main
//
int tint_count_leading_zeros(int v) {
  uint x = uint(v);
  uint b16 = ((x <= 65535u) ? 16u : 0u);
  x = (x << b16);
  uint b8 = ((x <= 16777215u) ? 8u : 0u);
  x = (x << b8);
  uint b4 = ((x <= 268435455u) ? 4u : 0u);
  x = (x << b4);
  uint b2 = ((x <= 1073741823u) ? 2u : 0u);
  x = (x << b2);
  uint b1 = ((x <= 2147483647u) ? 1u : 0u);
  uint is_zero = ((x == 0u) ? 1u : 0u);
  return int((((((b16 | b8) | b4) | b2) | b1) + is_zero));
}

RWByteAddressBuffer prevent_dce : register(u0);

int countLeadingZeros_6d4656() {
  int arg_0 = 1;
  int res = tint_count_leading_zeros(arg_0);
  return res;
}

[numthreads(1, 1, 1)]
void compute_main() {
  prevent_dce.Store(0u, asuint(countLeadingZeros_6d4656()));
  return;
}
//
// vertex_main
//
int tint_count_leading_zeros(int v) {
  uint x = uint(v);
  uint b16 = ((x <= 65535u) ? 16u : 0u);
  x = (x << b16);
  uint b8 = ((x <= 16777215u) ? 8u : 0u);
  x = (x << b8);
  uint b4 = ((x <= 268435455u) ? 4u : 0u);
  x = (x << b4);
  uint b2 = ((x <= 1073741823u) ? 2u : 0u);
  x = (x << b2);
  uint b1 = ((x <= 2147483647u) ? 1u : 0u);
  uint is_zero = ((x == 0u) ? 1u : 0u);
  return int((((((b16 | b8) | b4) | b2) | b1) + is_zero));
}

int countLeadingZeros_6d4656() {
  int arg_0 = 1;
  int res = tint_count_leading_zeros(arg_0);
  return res;
}

struct VertexOutput {
  float4 pos;
  int prevent_dce;
};
struct tint_symbol_1 {
  nointerpolation int prevent_dce : TEXCOORD0;
  float4 pos : SV_Position;
};

VertexOutput vertex_main_inner() {
  VertexOutput tint_symbol = (VertexOutput)0;
  tint_symbol.pos = (0.0f).xxxx;
  tint_symbol.prevent_dce = countLeadingZeros_6d4656();
  return tint_symbol;
}

tint_symbol_1 vertex_main() {
  VertexOutput inner_result = vertex_main_inner();
  tint_symbol_1 wrapper_result = (tint_symbol_1)0;
  wrapper_result.pos = inner_result.pos;
  wrapper_result.prevent_dce = inner_result.prevent_dce;
  return wrapper_result;
}
