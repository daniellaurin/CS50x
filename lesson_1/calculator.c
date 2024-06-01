#include <stdio.h>

int main(void) {
  long x, y;
  printf("Enter two numbers:\n");
  printf("x: ");
  scanf("%li", &x);
  printf("y: ");
  scanf("%li", &y);

  printf("%li\n", x + y);
  return 0;
}
// prototypes => forward decleration
// buffer overflow
// truncation
