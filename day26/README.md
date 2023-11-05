[Problem Statement](https://workat.tech/problem-solving/practice/three-sum)

# Three Sum
Medium
50 / 50
Given an array A, find all unique triplets in the array whose sum is equal to zero.

Example:
A: [1, 1, 0, -1, -2]
Triplets: [
  [-2, 1, 1],
  [-1, 0, 1]
]
Note: Each triplet should be sorted. The resultant array should be sorted as well.

Testing
Input Format
The first line contains an integer ‘T’ denoting the number of test cases.

For each test case, the input contains two lines:

An integer 'n' denoting the size of the array.
n space-separated integers denoting the elements of A.
Output Format
For each test case, the output contains the following lines.

A line containing an integer ‘m’ denoting the number of unique triplets.
m lines contain three integers representing each triplet.
Sample Input
2
4
-1 0 1 2
5
1 -1 9 -8 0
Expected Output
1
-1 0 1
2
-8 -1 9
-1 0 1
Constraints
1 <= T <= 10
3 <= n <= 3000
-105 <= Ai <= 105
