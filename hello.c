#include <stdio.h>

int main(void) {
  char a[] = "hello world";
  for (int i = 0; i < sizeof(a); i++) {
    printf("%s", a[i]);
  }
  return 0;
}