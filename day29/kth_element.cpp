#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i = 0, j = 0;
        
        vector<int> sorted;
        
        while(i < n && j < m) {         //this is checking till if none of the array is reach to end
            if(arr1[i] < arr2[j]) {
                sorted.push_back(arr1[i]);
                i++;
            }else {
                sorted.push_back(arr2[j]);
                j++;
            }
            
            if(sorted.size() == k) {
                return sorted.back();
            }    
        }
        
        if(i >= n) {                        // if any array reached limit then we apend the elements from remaining
            while(j < m && sorted.size() !=k) {
                sorted.push_back(arr2[j]);
                j++;
            }
        }else{
            while(i < n && sorted.size() !=k) {
                sorted.push_back(arr1[i]);
                i++;
            }
        }
        
        return sorted.back();
    }
    
};