/* Self-checking program: returns non-zero on failure (for the C / run-command
   grader). Build + run with: gcc add.c -o a.out && ./a.out */
#include <stdio.h>

int add(int a, int b) {
  return a + b;
}

int main(void) {
  if (add(2, 3) != 5 || add(-4, 2) != -2 || add(0, 7) != 7) {
    fprintf(stderr, "FAIL\n");
    return 1;
  }
  printf("All C tests passed\n");
  return 0;
}
