#include <stdio.h>

int main(int argc, char **args) {
  int i = 0;
  int sum = 0;
  for (; i < 10 ; i++) {
    printf("Hello, world\n");
    sum += i;
  }
  printf("sum=%d\n", sum);

  return 0;
}
