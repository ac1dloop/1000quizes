#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	int m;
	int n;

	cin >> m >> n;

	int arr[m][n];

	for (int i=0;i<m;++i){
		for (int j=0;j<n;++j){
			cin >> arr[i][j];
		}
	}

	int n_i=-1;
	int max_n=0;

	for (int i=0;i<m;++i){
		int eq_n=0;
		for (int j=0;j<n;++j){
			for (int k=j+1;k<n;++k){
				if (arr[i][j]==arr[i][k]){
					++eq_n;
				}
			}
		}
		if (eq_n>=max_n){
			max_n=eq_n;
			n_i=i+1;
		}
	}
	if (n_i!=-1)
	cout << "n_i: " << n_i << endl;

	return 0;
}
