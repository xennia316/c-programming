/**
 * @file multipliction_table2.c
 * @author xennia316
 * @brief Multiplication table to a certain range
 * @version 0.1
 * @date 2021-12-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
int main() {

  int n, i, range;
  printf("Enter an integer: ");
  scanf("%d", &n);

  // prompt user for positive range
  do {
    printf("Enter the range (positive integer): ");
    scanf("%d", &range);
  } while (range <= 0);

  for (i = 0; i <= range; ++i) {
    printf("%d * %d = %d \n", n, i, n * i);
  }

  return 0;
}
