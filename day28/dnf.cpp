#include<iostream>
#include<vector>
using namespace std;

void sortTheArray (vector<int> &A) {
    // add your logic here
	vector<int> sorted;
	int left = 0, mid = 0, right = A.size() - 1;
	
	while(mid <= right) {
		if(A[mid]== 0){
			swap(A[left], A[mid]);			   // left for the 0's
			left++;
			mid++;
		}else if(A[mid] == 2) {					// right for the 2's
			swap(A[mid], A[right]);
			right--;
	
		}else {									//Automatically 1's will be in middle
			mid++;			
		}
	}
    cout<<A[0]<<A[1]<<A[2]<<A[3]<<endl;         // for the output purpose
}

int main() {
    vector<int> A = {0, 0, 0, 1};
    sortTheArray(A);

    return 0;
}