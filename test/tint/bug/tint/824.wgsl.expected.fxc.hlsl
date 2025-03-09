struct Output {
  float4 Position;
  float4 color;
};
struct tint_symbol_1 {
  uint VertexIndex : SV_VertexID;
  uint InstanceIndex : SV_InstanceID;
};
struct tint_symbol_2 {
  float4 color : TEXCOORD0;
  float4 Position : SV_Position;
};

Output main_inner(uint VertexIndex, uint InstanceIndex) {
  float2 zv[4] = {(0.20000000298023223877f).xx, (0.30000001192092895508f).xx, (-0.10000000149011611938f).xx, (1.10000002384185791016f).xx};
  float z = zv[min(InstanceIndex, 3u)].x;
  Output output = (Output)0;
  output.Position = float4(0.5f, 0.5f, z, 1.0f);
  float4 colors[4] = {float4(1.0f, 0.0f, 0.0f, 1.0f), float4(0.0f, 1.0f, 0.0f, 1.0f), float4(0.0f, 0.0f, 1.0f, 1.0f), (1.0f).xxxx};
  output.color = colors[min(InstanceIndex, 3u)];
  return output;
}

tint_symbol_2 main(tint_symbol_1 tint_symbol) {
  Output inner_result = main_inner(tint_symbol.VertexIndex, tint_symbol.InstanceIndex);
  tint_symbol_2 wrapper_result = (tint_symbol_2)0;
  wrapper_result.Position = inner_result.Position;
  wrapper_result.color = inner_result.color;
  return wrapper_result;
}
