// #include <math.h>
// #include <stdio.h>

extern "C" {
  int doubler(int x) {
    return 2 * x;
  }

  int fib(int a) {
    if (a == 0 || a == 1) return a;
    return fib(a - 1) + fib(a - 2);
  }

  void manipArr(char* data, int len) {
    for (int i = 0; i < len; i += 4) {
      int r = data[i];
      int g = data[i+1];
      int b = data[i+2];
      int a = data[i+3];
      int brightness = (r*.21+g*.72+b*.07);

      data[i] = brightness;
      data[i+1] = brightness;
      data[i+2] = brightness;
      data[i+3] = a;
    }
  }
}