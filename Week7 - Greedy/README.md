We are back using Codeforces again. Yay! (ﾉ◕ヮ◕)ﾉ*:・ﾟ✧

<p align="center">946 A - Partition</p>

<p align="justify">
For this problem, we have a set of number (n or a) and it wants us to count the total possibilities of those set number from group B minus group C. If the number is positive, it belongs to group B. If the number is negative, it belongs to group C. What interesting is, when group C (the minus number) is called, it become positive because minus (-) times minus (-) will become positive (+).For example, we have a set of {3, -2, and 1}. First, we count the sum of group B, which is 3+1=4. Then, we count the sum of group C, which is -2. If we put them together in the function it will become 4-(-2) = 4+2 = 6. Thus, the amount of possibilities from the data set is 6.

tl;dr: This problem wants you to sum the amount of input even though it is minus. ԅ(≖‿≖ԅ)

<p align="justify">
In the code, we first input the number of the set n or a. Then, we input the data set (x). From there, the code will determine the group. Using the function “if (x>0)” we can see that it is group B, else it is group C. In group B, the code adds the number as usual; in group C, we minus the number, so it will become positive in the end. The total of sum (sum) will be printed in the end.

Problem: http://codeforces.com/problemset/problem/946/A/

Solution Code:

<p align="center">978 B – File Name</p>

<p align="justify">
For this problem, we want to get rid of possible three ‘x’s in a filename, because it causes an error when user tries to upload the file to “Codehorses”. The system doesn’t know what to do when the file name contains three ‘x’s, and thus it thinks that the file doesn’t correspond with the social network procedure. If the file is free from three ‘x’, then the file is good to go. For example, we have a filename ‘abc’. When user tries to send the file ‘abc’, the system recognizes it. However, when the file name is ‘xxxabcxxx’, the system is confused. Getting rid of two ‘x’s from the file name is a good one, since it changed the file name to ‘xxabcxx’ (the left and the right part). If there are two ‘x’s, it is alright, as long as it is not three ‘x’s.

tl;dr: This problem wants you to count the amount of ‘xxx’ in the string.  ( ͡° ͜ʖ ͡°)

<p align="justify">
In the code, we first enter the amount of letter in the filename, and then input the name of the file. After that, the code will check the string using an array for possible three ‘x’s using ‘for’ and ‘if’ function. If they found three ‘x’s in the file name, then the output is added (ans++). In the end of the ‘for’ function, we then print the total possible x (ans).

Problem: http://codeforces.com/problemset/problem/978/B

Solution Code:

<p align="center">731 B – Coupons and Discounts</p>

🍕 😋

<p align="justify">
Pizza! Now this problem is making me hungry. Anyway, pizza is delicious. I mean, the problem wants us to count how many pizzas can be purchased for the teams, which consist of a students. Sereja, the coach, wants to buy pizza using the coupons and discounts he has. However, in order to do that, he has to count how many coupons and discounts needed for all students, not less nor more. For the code, we want to input the training session first. Then, the second input consists of the number of teams that will get the pizza. After given all the input, the code will count the amount of the pizza is enough for the team. If it is, print “YES”, else print “NO”.

Problem: http://codeforces.com/problemset/problem/731/B

Solution Code:
