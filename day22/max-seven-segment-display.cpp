#include <iostream>
#include <cmath>
#include <typeinfo>
#include<string>
using namespace std;

int matchStickDictionary(int digit) {
	int matchDictionary[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
	return matchDictionary[digit];
}

int countMatchSticks(string num){
	int numLength = num.length();
	int count = 0;

	for(int i = 0; i < num.length(); i++){
		int digit = num[i] - '0';
		count += matchStickDictionary(digit);
	} 

	return count;
}

string maxNumPossible(int sticks) {
	int limit = floor(sticks / 2);
	string result;

	if(sticks % 2 != 0){
		result += '7';
		limit -= 1;
	}

	for(int i = 0; i < limit; i++){
		result += '1';
	}

	return (result);
}

int main() {
	int iteration, numOfSticks;
	string num;
	cin >> iteration;    //Reading input from STDIN
	// cout << "Input number is " << num << endl;	// Writing output to STDOUT
	while(iteration >= 0){
		getline(cin, num);
		numOfSticks = countMatchSticks(num);
		cout<<maxNumPossible(numOfSticks)<<endl;
		iteration--;
	}

	return 0;
}