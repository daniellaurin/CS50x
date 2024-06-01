#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

int while_loop();
int for_loop(void);
int do_while_loop();
int forever_block();

int main(void) {
  // while_loop();
  printf("\n");
  // for_loop();
  do_while_loop();
}

int while_loop() {
  int i = 0;
  while (i < 3) {
    printf("meow\n");
    i++;
  }
  return 0;
}

int for_loop(void) {
  for (int i = 0; i < 3; i++) {
    printf("meow\n");
  }
  return 0;
}

int do_while_loop() {
  int n;
  do {
    scanf("%d", &n);
  } while (n < 1);

  return n;
}

// you can also do while (1)
int forever_block() {
  while (true) {
    printf("meow\n");
  }
}
