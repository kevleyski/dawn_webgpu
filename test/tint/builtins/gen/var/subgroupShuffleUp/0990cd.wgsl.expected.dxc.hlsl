//
// fragment_main
//
RWByteAddressBuffer prevent_dce : register(u0);

vector<float16_t, 4> subgroupShuffleUp_0990cd() {
  vector<float16_t, 4> arg_0 = (float16_t(1.0h)).xxxx;
  uint arg_1 = 1u;
  vector<float16_t, 4> res = WaveReadLaneAt(arg_0, (WaveGetLaneIndex() - arg_1));
  return res;
}

void fragment_main() {
  prevent_dce.Store<vector<float16_t, 4> >(0u, subgroupShuffleUp_0990cd());
  return;
}
//
// compute_main
//
RWByteAddressBuffer prevent_dce : register(u0);

vector<float16_t, 4> subgroupShuffleUp_0990cd() {
  vector<float16_t, 4> arg_0 = (float16_t(1.0h)).xxxx;
  uint arg_1 = 1u;
  vector<float16_t, 4> res = WaveReadLaneAt(arg_0, (WaveGetLaneIndex() - arg_1));
  return res;
}

[numthreads(1, 1, 1)]
void compute_main() {
  prevent_dce.Store<vector<float16_t, 4> >(0u, subgroupShuffleUp_0990cd());
  return;
}
