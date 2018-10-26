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

	vector<int> res;

	for (int k=0;k<m-1;++k){
		int S=0;
		for (int i=0,j=k;i<k+1;++i,--j){
			S+=arr[i][j];
		}
		res.push_back(S);
	}

	for (int k=0;k<m-1;k++){
		int S=0;
		for (int i=m-1,j=k+1;i>=k+1;--i,++j){
			S+=arr[i][j];
		}
		res.push_back(S);
	}

	for (auto x: res)
		cout << x << " ";
	cout << endl;

	return 0;
}
