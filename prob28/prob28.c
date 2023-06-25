#include <stdio.h>

/*
Starting with the number 1 and moving to the right in a clockwise direction a 5 by 5 spiral is formed as follows:

21 22 23 24 25
20  7  8  9 10
19  6  1  2 11
18  5  4  3 12
17 16 15 14 13

It can be verified that the sum of the numbers on the diagonals is 101.

What is the sum of the numbers on the diagonals in a 1001 by 1001 spiral formed in the same way?




A more efficient manner. This algorithm will calculate the next corner
value of each step, based off of the previous calculated value.
EG: 1,3,5,7,9,13,17,21,25,N

Iteration Step Order For Calculation
 H 22 23 24 I
20  D  8  E 10
19  6  A  2 11
18  C  4  B 12
 G 16 15 14  F


NOTES:
  - Breaks when the matrix dimensions are even due to the center
    block of a matrix. Due to this, the algorithm requires a perfect matrix.
    Otherwise, the product will not be accurate.



:~/euler$ time ./prob28
669171001

real	0m0.002s
user	0m0.000s
sys	0m0.000
*/

unsigned long gridSize = 1001;
unsigned long diagSum = 1;

int main() {
  unsigned long i, x;

  for (i=2; i<=gridSize; i+=2) {
    for (x=0; x<4; x++) {
      diagSum += i;
    }
  }

  printf("%i\n", diagSum);
}
