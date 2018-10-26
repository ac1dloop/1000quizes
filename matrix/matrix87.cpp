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
		int max=numeric_limits<int>::min();
		for (int i=0,j=k;i<=k;++i,--j){
			if (arr[i][j]>max)
				max=arr[i][j];
		}
		res.push_back(max);
	}

	for (int k=0;k<m-1;k++){
		int max=numeric_limits<int>::min();
		for (int i=m-1,j=k+1;i>=k+1;--i,++j){
			if (arr[i][j]>max)
				max=arr[i][j];
		}
		res.push_back(max);
	}

	for (auto x: res)
		cout << x << " ";
	cout << endl;

	return 0;
}
