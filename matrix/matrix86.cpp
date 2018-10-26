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
		int min=numeric_limits<int>::max();
		for (int j=m-k-1,i=0;i<=k;++j,++i){
			if (arr[i][j]<min)
				min=arr[i][j];
		}
		res.push_back(min);
	}

	for (int k=0;k<m-1;k++){	
		int min=numeric_limits<int>::max();
		for (int i=1+k,j=0;i<m;++i,++j){
			if (arr[i][j]<min)
				min=arr[i][j];
		}
		res.push_back(min);
	}

	for (auto x: res)
		cout << x << " ";
	cout << endl;

	return 0;
}
