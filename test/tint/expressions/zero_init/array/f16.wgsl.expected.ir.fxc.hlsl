SKIP: INVALID


void f() {
  float16_t v[4] = (float16_t[4])0;
}

[numthreads(1, 1, 1)]
void unused_entry_point() {
}

FXC validation failure:
<scrubbed_path>(3,3-11): error X3000: unrecognized identifier 'float16_t'
<scrubbed_path>(3,13): error X3000: unrecognized identifier 'v'


tint executable returned error: exit status 1
