For this weekly submission, we don’t take Codeforces’ problem. We take one question from https://www.hackerrank.com/ & https://www.hackerearth.com/. Since, we are not using Codeforces, the solution code can be seen in the repository of my GitHub account.

Heaps: Find the Running Median
For some odd reason, when opening the website, it gives ‘the site can’t be reached’. Sometime, I can open the website no problem. Could it be that some routers block the website? What is the motivation of blocking a coding site? Anyway, enough with the chit-chat, we are tasked to count the median of the dataset. The twist is, we must count the median every time n is added by 1. For example, I input n=4, then the dataset are {1, 2, 3, and 4}. The first median is 1, because there is only 1. The second median is between 1 and 2, and to get the median when it is even, we need to add the before the middle number and after the middle number and divide them by 2; so we get 1.5. The third median is 2, because when it is odd, we can already tell the median by knowing the middle number. Between {1, 2, and 3}, the middle number is 2. The fourth one uses the same trick like the second median, add them and divide them by 2. For the code, we are using heap tree; we push, we pop, but most importantly it works. It is similar to stack in data structure when we are using pop() and push().

Problem: https://www.hackerrank.com/challenges/ctci-find-the-running-median/problem
Solution Code: In the repository, under the name of ‘heap.cpp’

Roy and Trending Topics
Unlike the previous problem, this website works normally. Roy wants to create a social media, similar to Facebook. He wants to create an algorithm for the topic discussed in his social media. A topic consists of the old score, but it can be increased. If the topic in social media is posted, the score is increased by 50; liking the post will give it 5; commenting give 10; and sharing give 20. He wants to sort top five trending topic based on the change of the score. Here is a table of the changed score based on the example:
 
From the table we can conclude that post with ID No 1003, 1002, 1001, and 999 has the highest change in score. Then, ID No 1007 is the highest ID from all 50 point change. Furthermore, this example only gave us the ‘Post’ input, while other input is zero. In my honest opinion, this is not a good example, but who am I to blame. ¯\_(ツ)_/¯
For the code, we firstly input the number of ID. After that, we input the ID followed by the initial score, the amount of post, like, comment, and share. Then, the code stores the input in an array and use queue to push the top five (also print it) and pop the others.

Problem: https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/roy-and-trending-topics-1/
Solution Code: In the repository, under the name of ‘roy.cpp’.



