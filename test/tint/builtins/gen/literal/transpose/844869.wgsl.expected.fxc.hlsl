SKIP: INVALID

RWByteAddressBuffer prevent_dce : register(u0);

int transpose_844869() {
  matrix<float16_t, 4, 4> res = matrix<float16_t, 4, 4>((float16_t(1.0h)).xxxx, (float16_t(1.0h)).xxxx, (float16_t(1.0h)).xxxx, (float16_t(1.0h)).xxxx);
  return ((res[0][0] == float16_t(0.0h)) ? 1 : 0);
}

void fragment_main() {
  prevent_dce.Store(0u, asuint(transpose_844869()));
  return;
}

[numthreads(1, 1, 1)]
void compute_main() {
  prevent_dce.Store(0u, asuint(transpose_844869()));
  return;
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
  tint_symbol.prevent_dce = transpose_844869();
  return tint_symbol;
}

tint_symbol_1 vertex_main() {
  VertexOutput inner_result = vertex_main_inner();
  tint_symbol_1 wrapper_result = (tint_symbol_1)0;
  wrapper_result.pos = inner_result.pos;
  wrapper_result.prevent_dce = inner_result.prevent_dce;
  return wrapper_result;
}
FXC validation failure:
<scrubbed_path>(4,10-18): error X3000: syntax error: unexpected token 'float16_t'
<scrubbed_path>(5,12-14): error X3004: undeclared identifier 'res'


tint executable returned error: exit status 1
