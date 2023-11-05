#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// NOTE This version time exceeds
    vector<vector<int> > threeSum(vector<int> &A) {
        // add your logic here
        int n = A.size();
        int left, right;
        vector<vector<int> > triplets;   
        sort(A.begin(), A.end());  

        for (int i = 0; i < n - 2; i++) {
            left = i + 1, right = n - 1;
            while (left < right) {
                int sum = A[i] + A[left] + A[right];
                cout<<A[i]<<A[left]<<A[right]<<sum<<endl;
                if(sum == 0){
                    vector<int> temp;
                    temp.push_back(A[i]);
                    temp.push_back(A[left]);
                    temp.push_back(A[right]);
                    triplets.push_back(temp);
                    left++;
                    right--;
                }else if (sum < 0){
                    left++;
                }else{
                    right--;
                }

                // if(right == (A.size() - 1)){
                //     left++;
                //     right = left + 1;
                // } 
                
            }
        }

        return  triplets;
    }

    int main() {
        vector<int> A = {1, -1, 9, -8, 0};

        vector<vector<int>> T = threeSum(A);
        cout<<T.size()<<endl;
        // cout<<T[0][0]<<T[0][1]<<T[0][2]<<endl;
        // cout<<T[1][0]<<T[1][1]<<T[1][2]<<endl;

        return 0;
    }
