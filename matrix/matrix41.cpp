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

	for (int i=0;i<n;++i){
		for (int j=0;j<m;++j){
			cin >> arr[i][j];
		}
	}

	int max_n=0;
	int n_j=-1;
	
	for (int j=m-1;j>=0;--j){
		int eq_n=0;
		for (int i=0;i<n;++i){
			for (int k=i+1;k<n;++k)
				if (arr[i][j]==arr[k][j])
					++eq_n;
		}
		if (eq_n>=max_n){
			max_n=eq_n;
			n_j=j;
		}
	}
	
	if (n_j!=-1)
	cout << "n_j: " << n_j+1 << endl;

	return 0;
}
