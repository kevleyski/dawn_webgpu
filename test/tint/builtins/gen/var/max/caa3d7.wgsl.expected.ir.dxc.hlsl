//
// fragment_main
//

void max_caa3d7() {
  int res = int(1);
}

void fragment_main() {
  max_caa3d7();
}

//
// compute_main
//

void max_caa3d7() {
  int res = int(1);
}

[numthreads(1, 1, 1)]
void compute_main() {
  max_caa3d7();
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


void max_caa3d7() {
  int res = int(1);
}

VertexOutput vertex_main_inner() {
  VertexOutput v = (VertexOutput)0;
  v.pos = (0.0f).xxxx;
  max_caa3d7();
  VertexOutput v_1 = v;
  return v_1;
}

vertex_main_outputs vertex_main() {
  VertexOutput v_2 = vertex_main_inner();
  vertex_main_outputs v_3 = {v_2.pos};
  return v_3;
}

