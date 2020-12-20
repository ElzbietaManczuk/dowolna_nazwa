#include <stdio.h>

int ff(int a, int b) {
  if (a == b) {
    return 0;
  } else {
    return (2 * a * b) / (a - b);
  }
}
int main(void) {
  int x, y;
  scanf("%d %d", &x, &y);
  printf("%d\n", ff(x, y));
  return 0;
}