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

	for (int j=0;j<m;++j){
		int avg=0;
		for (int i=0;i<n;++i){
			avg+=arr[i][j];
		}
		avg/=n;
		int res=0;
		for (int i=0;i<n;++i){
			if (arr[i][j]>avg)
				++res;
		}
		cout << j << ": " << res << endl;
	}

	return 0;
}
