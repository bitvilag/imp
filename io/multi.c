/*
 * Multiplication table printing
 */

#include <stdio.h>

int main() {
  int i; /* loop counter for outer loop */
  int j; /* loop counter for inner loop */
  for (i = 1; i <= 10; ++i) { /* outer for loop */
    for (j = 1; j <= 10; ++j) { /* nested for loop (inner loop) */
      printf("%2d x %2d = %2d, ", i, j, i*j); /* format specifier with width */
    }
    printf("\n");
  }
  return 0;
}
