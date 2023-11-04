#include<iostream>
#include<vector>
using namespace std;

void sortTheArray (vector<int> A) {
    // add your logic here
	vector<int> sorted;
	int mid = 0, indx = 0;

	while(sorted.size() <= A.size()) {
		if(A[indx] == 0) {
			sorted.insert(sorted.begin(), 0);
			mid++;
            cout<<indx<<"TELNET0:   "<<mid<<endl;
		}
		
		if(A[indx] == 1) {
			sorted.insert(sorted.begin() + mid, 1);
            cout<<indx<<"TELNET1:   "<<mid<<endl;
		}
		
		if(A[indx] == 2) {
			sorted.push_back(2);
            cout<<indx<<"TELNET2:   "<<mid<<endl;
		}
		
		indx++;
	}
    cout<<sorted[0]<<sorted[1]<<sorted[2]<<sorted[3]<<sorted[4]<<sorted[5]<<endl;

}

int main() {
    vector<int> A = {1, 0, 0, 0, 0};
    vector <int> B;
    cout<<A[0]<<A[1]<<endl;
    sortTheArray(A);

    return 0;
}