#include<iostream>
#include<string>
using namespace std;

string countAndSay(int n) {
    // add your logic here
	string sequence = "1";
	
	for(int i = 1; i < n; i++) {
		int count = 0;
		int sIndx = 0;
		string temp;
		char currentStr = sequence[0];

		while(sIndx < sequence.length()){
			bool isEnd = sIndx == sequence.length() - 1;
			
			if(currentStr == sequence[sIndx]) {
				count += 1;
			}
			
			if(currentStr != sequence[sIndx + 1] || isEnd) {
				temp.push_back('0' + count);
				temp.push_back(currentStr);

				if(isEnd != true) {
					currentStr = sequence[sIndx + 1];				
				}
				count = 0;
			}
			sIndx++;
		}
		sequence = temp;
		temp = "";
	}
	
	return sequence;
}

int main() {
    cout<<countAndSay(3);
    return 0;
}