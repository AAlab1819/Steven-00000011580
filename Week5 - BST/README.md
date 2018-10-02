<p align="center">115A - Party</p>

<p align="justify">
For this problem, we want to throw a party of a company. In this company, there are a lot of different ranks, such as the manager, and the lowest is the ordinary employee. One manager, can have a lot of underling or employee, and each underling can have more underling or employee. For the party, we want to create a group without any superiority in it. For the optimal solution, we will divide the group according to the same position, for example: Superior employee A is with superior employee B, and the lowest employee C is with the lowest employee D; with this, everyone in the group will have the same rank; no superiority. For the code, we first input the number of employee (n). After that, we input the number and store it in an array. Using a complex function, we are able to find the optimal number of group created based on the input (ans). In the end, print the input and the code will stop.

Complexity: O(n2)

Problem: http://codeforces.com/problemset/problem/115/A

Solution Code: http://codeforces.com/contest/115/submission/43651542

<p align="center">4C - Registration System</p>

<p align="justify">
For this problem, we are going to notice which username is new and which username is already taken from the database. For example, I, as a new user, want to register. So, I put my username as “Steven” and it is accepted in the database. However, there is also another Steven from another country who wants to register as well. As the system must differentiate two Steven, the second user with the name Steven has his username added “1” in the end, so it becomes “Steven1”. If there is another person who wants to create another account with Steven again, it will be named “Steven2”, and so on. However, if the username is not Steven, Jason for example, it will be accepted as a new user. For the code, we first enter the number of user (n) we want to register. Then, we input the user one by one. If the user has the same name, it will be added a number (a). In the end, the code will notice which one is new and which one is already used and print the said username (that’s stored within an array).

Complexity: O(n log n)

Problem: http://codeforces.com/problemset/problem/4/C

Solution Code: http://codeforces.com/contest/4/submission/43651524

<p align="center">913B - Christmas Spruce</p>

<p align="justify">
For this problem, we are going to learn about tree, a rooted tree to be exact. If you don’t know about it, the problem even gives you a wiki page about it: https://en.wikipedia.org/wiki/Tree_(graph_theory). We want to know if the tree is a spruce or not. It is a spruce if its every non-leaf vertex has at least 3 leaf children. If it don’t have, then screw it, it’s not a spruce. It’s pretty much self-explanatory, if you understand tree diagram (If I am not mistaken, we do learn tree in Data Structure with Brother Hudi and Mr. Frans, I might be wrong though). For the code, we have a two arrays in the beginning: Array for the tree (G[][]) and array for the leaf (leaf[]). For some reason, if I put the array in the main, the code will work, but it will print blank, unable to put any input. Either my computer is a potato or somehow I mess the C++ algorithm completely and make it dizzy. We first input the amount of vertices in our tree (n). Then, we input the branching root (u). After that, the code will tell us if the tree is a spruce or not using a complex algorithm function. In the end, the code will print ‘YES’ if it is a spruce and ‘NO’ otherwise.

Complexity: O(n)

Problem: http://codeforces.com/contest/913/problem/B

Solution Code: http://codeforces.com/contest/913/submission/43651579
