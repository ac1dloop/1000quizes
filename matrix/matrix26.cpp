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

	int min_mult=numeric_limits<int>::max();
	int n_j=0;

	for (int j=0;j<m;++j){
		int s=1;
		for (int i=0;i<n;++i){
			s*=arr[i][j];
		}
		if (s<min_mult){
			min_mult=s;
			n_j=j;
		}
	}

	cout << n_j+1 << "  " << min_mult << endl;

	return 0;
}
