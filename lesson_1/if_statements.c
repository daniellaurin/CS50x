#include <stdio.h>

int main(void) {
  int x, y;

  printf("What's x? \n");
  scanf("%d", &x);

  printf("What's y? \n");
  scanf("%d", &y);

  if (x > y)
    printf("x is greater thant y\n");
  if (x < y)
    printf("x is lesser than y\n");
  else
    printf("x is equal to y\n");

  return 0;
}
