#version 310 es

void f() {
  {
    uvec2 tint_loop_idx = uvec2(4294967295u);
    int i = 0;
    while(true) {
      if (all(equal(tint_loop_idx, uvec2(0u)))) {
        break;
      }
      if (false) {
      } else {
        break;
      }
      {
        uint tint_low_inc = (tint_loop_idx.x - 1u);
        tint_loop_idx.x = tint_low_inc;
        uint tint_carry = uint((tint_low_inc == 4294967295u));
        tint_loop_idx.y = (tint_loop_idx.y - tint_carry);
        i = (i + 1);
      }
      continue;
    }
  }
}
layout(local_size_x = 1, local_size_y = 1, local_size_z = 1) in;
void main() {
}
