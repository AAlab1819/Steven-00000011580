<p align="center">912 A – Tricky Alchemy</p>

 <p align="justify">
“Grisha needs to obtain some yellow, green and blue balls. It's known that to produce a yellow ball one needs two yellow crystals, green — one yellow and one blue, and for a blue ball, three blue crystals are enough.” This means we have to obtain yellow crystal (ycryst) and blue crystal (bcryst), to make yellow ball (yball), green ball (gball), and blue ball (bball). Yellow ball need 2 yellow crystal (2 ycryst), green ball need 1 yellow crystal and 1 blue crystal (ycryst + bcryst), blue ball need 3 blue crystal (3 bcryst). Now we have to count how many additional crystal needed for every ball to be created. For my solution, I minus the crystal and the ball together, for example: yellow ball need two yellow crystal. I minus yellow ball by 2 and then minus yellow ball by 1, what this means is one yellow ball is already created using the 2 yellow crystal. Repeat the process until yellow ball is 0. Once finished, the crystal will become a minus integer number, then I change the minus integer number into a normal integer (by using ‘abs’ function) and combine the two (yellow & blue). Thus, I get the additional crystal needed to finish making balls.
</p>

Problem:
http://codeforces.com/contest/912/problem/A

Solution Code:
http://codeforces.com/contest/912/submission/42328919

<br>
<p align="center">854 A – Fraction</p>

 <p align="justify">
In short, the input is the sum of the both output, but the first output must be smaller than the second output. To solve this, I use random number for the numerator (num) and denominator (den). I use ‘do while’ loop to make sure that the numerator is smaller (and not the same as) denominator; also used it to make sure that both numerator and the denominator has the same sum like the output. There isn’t much to discuss, the code is straight forward.
</p>

Probelm:
http://codeforces.com/contest/854/problem/A

Solution Code:
http://codeforces.com/contest/854/submission/42330074

<br>
<p align="center">988 A – Diverse Team</p>

 <p align="justify">
This is by far the most confusing problem from the three, since I am not really sure what it the output means. From my point of view, you want to know which student rating is distinct to one another, in what order. I use 'for' function to fill the array “int rating [numStudent]”, and store the output in array “int order[numGroup]”. I try to compare each array’s element with 'if' function, so the location of difference element is found (this is for the output) and stored it in an array.
</p>

Probelm:
http://codeforces.com/contest/988/problem/A

Solution Code:
http://codeforces.com/contest/988/submission/42334085

<br>
 <p align="justify">
Note: I am not to pro at coding. I also wasted half day making all of this code. Whatever the case, I have tried my best, though. Also:
https://www.youtube.com/watch?v=yD2FSwTy2lw
</p>
