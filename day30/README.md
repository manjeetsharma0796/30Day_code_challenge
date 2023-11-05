[Problem Statement](https://workat.tech/problem-solving/practice/row-column-zero)
# Row Column Zero
Medium
50 / 50
Given a matrix, if any of the cells in the matrix is 0, set all the elements in its row and column to 0.

Examples
1 1 1        1 0 1
1 0 1   =>   0 0 0
1 1 1        1 0 1

0 1 2        0 0 0
3 4 5   =>   0 4 5
1 2 3        0 2 3

0 1 0        0 0 0
3 4 5   =>   0 4 0
1 2 3        0 2 0

0 1 0        0 0 0
3 0 5   =>   0 0 0
1 2 3        0 0 0
Testing
Input Format
The first line contains ‘T’ denoting the number of test cases.
For each test case, the input consists of the following lines:

The first line contains two space-separated integers ‘n’ and ‘m’ denoting the number of rows and columns respectively.
The next ‘n’ lines contains ‘m’ space-separated integers denoting elements of a 2-D matrix.
Output Format
For each test case, the output contains n lines, each containing m space-separated integers denoting the resultant matrix.

Examples
Sample Input
4
2 2
1 0
0 0
3 3
1 1 0
1 1 1
1 1 1
3 3
1 1 1
1 1 0
1 1 1
4 2
1 0
1 0
1 0
1 0
Expected Output
0 0
0 0
0 0 0
1 1 0
1 1 0
1 1 0
0 0 0
1 1 0
0 0
0 0
0 0
0 0
Constraints
1 <= T <= 100
1 <= m,n <= 100
1 <= matrix[i][j] <= 10000