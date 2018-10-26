#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;


int main()
{
	int m;
	cin >> m;

	int arr[m][m];
	for (int i=0;i<m;++i){
		for (int j=0;j<m;++j){
			cin >> arr[i][j];
		}
	}


	for (int i=0;i<m/2;++i){
		for (int j=0;j<m;++j){
			swap(arr[i][j], arr[m-i-1][m-j-1]);
		}
	}
/*
	for (int k=0;k<m-1;k++){
		for (int i=m-1,j=k+1;i>=k+1;--i,++j){
		}
	}
*/
	for (int i=0;i<m;++i){
		for (int j=0;j<m;++j){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}
