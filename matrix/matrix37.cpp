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

	
	int count=0;
	for (int j=0;j<m-1;++j){
		int eq_n=0;
		for (int i=0;i<n;++i){
			if (arr[i][j]==arr[i][m-1])
				++eq_n;
		}
		if (eq_n==n)
			++count;
	}

	cout << "count: " << count << endl;

	return 0;
}
