
int3 tint_div_v3i32(int3 lhs, int3 rhs) {
  return (lhs / ((((rhs == (int(0)).xxx) | ((lhs == (int(-2147483648)).xxx) & (rhs == (int(-1)).xxx)))) ? ((int(1)).xxx) : (rhs)));
}

[numthreads(1, 1, 1)]
void f() {
  int3 a = int3(int(1), int(2), int(3));
  int b = int(4);
  int3 r = tint_div_v3i32(a, int3((b).xxx));
}

