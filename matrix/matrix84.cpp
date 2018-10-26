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
		int n=0;
		for (int j=m-k-1,i=0;i<=k;++j,++i,++n){
			S+=arr[i][j];
		}
		S/=n;
		res.push_back(S);
	}

	for (int k=0;k<m-1;k++){
		int S=0;
		int n=0;
		for (int i=1+k,j=0;i<m;++i,++j,++n){
			S+=arr[i][j];
		}
		S/=n;
		res.push_back(S);
	}

	for (auto x: res)
		cout << x << " ";
	cout << endl;

	return 0;
}
