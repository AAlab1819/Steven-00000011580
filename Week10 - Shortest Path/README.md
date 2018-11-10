We are back using Codeforces again. Umm, okay…

<p align="center">
<img width="100" height="100" src="https://user-images.githubusercontent.com/25146223/48302430-5f4e7100-e52f-11e8-9a1c-f41e617429a3.jpg">

For this week’s topic: ‘The Shortest Path’, with the following problem:

<p align="center">601 A – The Two Routes</p>

<p align="justify">
Strangely, this problem, along with ‘602 C’ problem has the same story. I am not sure if that supposed to happen. By the way, this problem is quite confusing, but it is not as hard as the previous one. I hope what I explain in this repository is indeed correct. The problem begins with a story: In a country, there are number of town to visit. In order to visit one of the towns, the people have to use a bus or a train. However, a railway for a train and a road for a bus cannot hit one another, or there will be a catastrophe. With that in mind, a bus and a train cannot arrive to the same town’s station. If traveling by train or a bus from one town to another town, it requires one hour. We are tasked to count the minimum of hours of both vehicles to reach the destined town. For the code, we first input the number of the town (n) and the railway (m) respectively. After that we input the first town (u) and the second town (v) which is connected with a railway. A side note: first town (u) and second town (v) cannot have the same input; the first town (u) is always smaller than the second town (v), cannot be vice versa; the second town (v) cannot be bigger than the total number of town (n). With that in mine, with the correct input like the example, we can gain the desired output.

Complexity: O(n log n)

Problem: http://codeforces.com/problemset/problem/601/A

Solution Code: http://codeforces.com/contest/601/submission/45513895

<p align="center">20 C - Dijkstra?</p>

<p align="justify">
Such a weird name for a title, but as I explore the internet, I found out that the title means “Dijkstra's algorithm”, an algorithm for finding the shortest path. Well, the title is straight forward to the point, so does the problem’s story, because there is none. We are tasked to find the shortest path from vertex 1 to vertex n, and we can input n with whatever number we want. However, the input isn’t only n. We also have m, the number of edges; and following it are ‘a, b, and w’. ‘a and b’ is the endpoint, where ‘w’ is the length or distance from the two points. For the code, we use void function to find the path and apply the “Dijkstra's algorithm”. Inside the function, we use push like in data structure lesson. In the end, if we can find the shortest path, print the shortest path (the vertex travelled or transverse); if not, the output will be “-1”, meaning there is no possible way.

Complexity: O(n log n)

Problem: http://codeforces.com/problemset/problem/20/C

Solution Code: http://codeforces.com/contest/20/submission/45513882
