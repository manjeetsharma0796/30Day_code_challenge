#include<iostream>
#include<vector>
using namespace std;

void setRowColumnZeroes(vector<vector<int> > &matrix) {
    // add your logic here
	vector<int> row;
	vector<int> col;
	
	for(int i = 0; i < matrix.size(); i++) { 
		for(int j = 0; j < matrix[i].size(); j++){
			if(matrix[i][j] == 0){
				row.push_back(i);
				col.push_back(j);
			}
		}
	}
	//All recorded columns will be set to 0
	for(int i = 0; i < col.size(); i++){		
		int currentColTo0 = col[i];
		for(int mRow = 0; mRow < matrix.size(); mRow++){
			matrix[mRow][currentColTo0] = 0;
		}
	}
	//All recorded rows will be set to 0
	for(int i = 0; i < row.size(); i++){
		int currentRowTo0 = row[i];
		for(int mCol = 0; mCol < matrix[currentRowTo0].size(); mCol++){
			matrix[currentRowTo0][mCol] = 0;
		}
	}
}