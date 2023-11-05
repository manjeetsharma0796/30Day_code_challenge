#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> &A) {
    int n = A.size();
    vector<vector<int>> triplets;
    sort(A.begin(), A.end());

    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && A[i] == A[i - 1]) {
            i++; // Avoid duplicates
        }
        int left = i + 1, right = n - 1;
		
        while (left < right) {
            int sum = A[i] + A[left] + A[right];
			
            if (sum == 0) {
                triplets.push_back({A[i], A[left], A[right]});
				
                while(A[left] == A[left + 1]) {
                    left++; // Avoid duplicated if the next element is same, it maybe more than 1
            }
            	while(A[right] == A[right - 1]) {
            	        right--; // same as above
            	}
				
                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
			
        }
    }

    return triplets;
}