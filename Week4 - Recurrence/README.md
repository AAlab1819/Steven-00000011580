<p align="center">268B – Buttons</p>

 <p align="justify">
For this problem, we have to help Manao to open a lock. In order to open the lock, he has to guess the order of numbers in each lock; which number is the first, the next one, and so on. The kicker is: if he fails to guess the next number, the lock’s number will reset; that means he has to start over from the very beginning. The logic here is: we have to count the worst possibilities that he has to guess all the buttons to open the lock. For the code, it is pretty simple.  First input the lock’s number (how many number in the lock). After that, the code will count the each possibilities of him finally getting the right order (using ‘for’ function). Then, print the output (worst possibilities).

Best case: O (1)

Worst case: O (n)

Problem: http://codeforces.com/contest/598/problem/D

Solution Code: http://codeforces.com/contest/268/submission/43282603

<p align="center">598D – Igor in the Museum</p>

 <p align="justify">
This problem gave me a headache, because it is really confusing. Eventually, I am able to realize the meaning behind the problem and what the problem wants me to do. From what I get, you have to count each painting on wall (two adjacent cells: empty cell and impassable cell). For example in problem 1, we have a starting input in (2, 2). (2, 2) is an empty cell, so does (2, 3). Beside of the empty cell is an impassable cell, which consist a painting: (2, 4) on the right; (2, 1) on the left; (1, 2) & (1, 3) on top; (3, 2) & (3, 3) beneath. Thus, the total painting is 6. If we try the second input (2, 5), we get: (1, 5) on top; (3, 5) beneath; (2, 4) on the left; (2, 6) on the right, thus making the total of 4 painting. Now, for the code, we are using double char array for the field. First, we input our row, column, and the number of Igor’s starting position. After, that we draw or input the field with empty and impassable cell. Then, the code will distinguish the char of dot (.) and star (*). Using a very complex function (it’s magic!), we are able to count the painting in two adjacent cells.


Problem: http://codeforces.com/contest/268/problem/B

Solution Code: http://codeforces.com/contest/598/submission/43282626

*Not finished
