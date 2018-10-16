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

	int max_sum=numeric_limits<int>::min();
	int n_i=0;

	for (int i=0;i<m;++i){
		int res=std::accumulate(arr[i], arr[i]+n, 0);
		if (res>max_sum){
			max_sum=res;
			n_i=i;
		}
	}

	cout << n_i+1 << "  " << max_sum << endl;
	return 0;
}
