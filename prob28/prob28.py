#!/usr/bin/env python

"""
Starting with the number 1 and moving to the right in a clockwise direction a 5 by 5 spiral is formed as follows:

21 22 23 24 25
20  7  8  9 10
19  6  1  2 11
18  5  4  3 12
17 16 15 14 13

It can be verified that the sum of the numbers on the diagonals is 101.

What is the sum of the numbers on the diagonals in a 1001 by 1001 spiral formed in the same way?


- Banking on an observed pattern of spiraling increase of the number (clockwise spiral), one can generate the diaganols and solve without having to populate the entire grid manually. 



EXECUTION TIMES:

:~/euler$ time ./prob28.py 
669171001

real    0m0.021s
user    0m0.012s
sys 0m0.008s
"""


gridSize = 1001


start = 1
products = [1]

for corner in range(2, 10, 2):
  products.append(1 + corner)
  probInc = corner

  for diagPos in range(1, gridSize / 2):
    probInc = probInc + 8
    products.append(products[-1] + probInc)



print(sum(products))



