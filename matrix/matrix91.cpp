#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <limits>

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

	vector<int> res;

	for (int k=0;k<m-1;++k){
		for (int j=m-k-1,i=0;i<=k;++j,++i){
			arr[i][j]=0;
		}
	}

	for (int i=0,j=0;i<m;++i,++j)
		arr[i][j]=0;

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
