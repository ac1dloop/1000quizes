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

	for (int i=0;i<m;++i){
		int avg=std::accumulate(arr[i], arr[i]+n, 0)/n;
		int res=0;
		std::for_each(arr[i], arr[i]+n, [avg,&res](const int& r){
				if (r<avg)
					++res;
				});
		cout << i << ": " << res << endl;
	}

	return 0;
}
