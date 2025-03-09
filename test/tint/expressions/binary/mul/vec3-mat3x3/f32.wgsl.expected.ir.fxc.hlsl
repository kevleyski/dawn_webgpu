
cbuffer cbuffer_data : register(b0) {
  uint4 data[4];
};
float3x3 v(uint start_byte_offset) {
  return float3x3(asfloat(data[(start_byte_offset / 16u)].xyz), asfloat(data[((16u + start_byte_offset) / 16u)].xyz), asfloat(data[((32u + start_byte_offset) / 16u)].xyz));
}

void main() {
  float3 v_1 = asfloat(data[3u].xyz);
  float3 x = mul(v(0u), v_1);
}

