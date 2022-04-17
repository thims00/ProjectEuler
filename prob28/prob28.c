#include <stdio.h>

/*
A more efficient manner. This algorithm will calculate the next corner
value of each step, based off of the previous calculated value.
EG: 1,3,5,7,9,13,17,21,25,N

Starting from the center of the grid, it will work clockwise, outwardly to 
calculate the number of the diagonal planes for each layer of the grid.

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
unsigned long curStep = 1;



int main() {
  unsigned long i, x;
  unsigned long iters = gridSize;

  for (i=2; i<=iters; i+=2) {
    for (x=0; x<4; x++) {
      curStep += i;
      diagSum += curStep;
    }
  }

  printf("%i\n", diagSum);
}
