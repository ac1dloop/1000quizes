#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <limits>
#include <cmath>

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

	for (int i=0;i<=m-1;++i){
		for (int j=i;j<m-i;++j){
			arr[j][i]=0;
		}
	}

/*
	for (int k=0;k<m-1;k++){	
		for (int i=1+k,j=0;i<m;++i,++j){
			arr[i][j]=0;
		}
	}
*/

	for (int i=0;i<m;++i){
		for (int j=0;j<m;++j)
			cout << arr[i][j] << " ";

		cout << endl;
	}

	return 0;
}
