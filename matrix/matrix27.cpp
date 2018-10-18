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

	int max=numeric_limits<int>::min();
	int n_i=0;

	for (int i=0;i<m;++i){
		int res=*std::min_element(arr[i], arr[i]+n);
		if (res>max)
			max=res;
	}

	cout << "max in min rows: " << max << endl;
	return 0;
}
