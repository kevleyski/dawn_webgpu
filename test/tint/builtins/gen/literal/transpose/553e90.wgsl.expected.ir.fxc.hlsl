//
// fragment_main
//

void transpose_553e90() {
  float2x4 res = float2x4((1.0f).xxxx, (1.0f).xxxx);
}

void fragment_main() {
  transpose_553e90();
}

//
// compute_main
//

void transpose_553e90() {
  float2x4 res = float2x4((1.0f).xxxx, (1.0f).xxxx);
}

[numthreads(1, 1, 1)]
void compute_main() {
  transpose_553e90();
}

//
// vertex_main
//
struct VertexOutput {
  float4 pos;
};

struct vertex_main_outputs {
  float4 VertexOutput_pos : SV_Position;
};


void transpose_553e90() {
  float2x4 res = float2x4((1.0f).xxxx, (1.0f).xxxx);
}

VertexOutput vertex_main_inner() {
  VertexOutput v = (VertexOutput)0;
  v.pos = (0.0f).xxxx;
  transpose_553e90();
  VertexOutput v_1 = v;
  return v_1;
}

vertex_main_outputs vertex_main() {
  VertexOutput v_2 = vertex_main_inner();
  vertex_main_outputs v_3 = {v_2.pos};
  return v_3;
}

