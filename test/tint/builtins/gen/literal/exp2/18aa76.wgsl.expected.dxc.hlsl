//
// fragment_main
//
void exp2_18aa76() {
  float2 res = (2.0f).xx;
}

void fragment_main() {
  exp2_18aa76();
  return;
}
//
// compute_main
//
void exp2_18aa76() {
  float2 res = (2.0f).xx;
}

[numthreads(1, 1, 1)]
void compute_main() {
  exp2_18aa76();
  return;
}
//
// vertex_main
//
void exp2_18aa76() {
  float2 res = (2.0f).xx;
}

struct VertexOutput {
  float4 pos;
};
struct tint_symbol_1 {
  float4 pos : SV_Position;
};

VertexOutput vertex_main_inner() {
  VertexOutput tint_symbol = (VertexOutput)0;
  tint_symbol.pos = (0.0f).xxxx;
  exp2_18aa76();
  return tint_symbol;
}

tint_symbol_1 vertex_main() {
  VertexOutput inner_result = vertex_main_inner();
  tint_symbol_1 wrapper_result = (tint_symbol_1)0;
  wrapper_result.pos = inner_result.pos;
  return wrapper_result;
}
