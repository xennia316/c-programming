/**
 * @file 10.c
 * @author Sonia A,ehmbo @xennia316
 * @brief Initializing a two dimensional array.
 * @version 0.1
 * @date 2022-01-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(void)
{
    char r, n, b, q, k, p, R, N, P, Q, K, B;
    char chess_board[8][8] = {{r, n, b, q, k, b, n, r},
                              {p, p, p, p, p, p, p, p},
                              {'.', '.', '.  ', '.  ', '.  ', '.  ', '.  ', '.  '},
                              {' .', ' .', ' .', ' .', ' .', ' .', ' .', ' .'},
                              {'.', '.  ', '.  ', '.  ', '.  ', '.  ', '.  ', '.  '},
                              {' .', ' .', ' .', ' .', ' .', ' .', ' .', ' .'},
                              {P, P, P, P, P, P, P, P},
                              {R, N, B, Q, K, B, N, R}};
    printf(" %c", chess_board[8][8]);
}
