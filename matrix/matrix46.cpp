#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

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

	
	int min;
	vector<int> col_mins;

	/* fill array of min cols */
	for (int j=0;j<m;++j){
		min=numeric_limits<int>::max();

		for (int i=0;i<n;++i){
			if (arr[i][j]<=min)
				min=arr[i][j];
		}

		col_mins.push_back(min);
	}

	for (int i=0;i<m;++i){
		for (auto x: col_mins){
			if (x==*max_element(arr[i], arr[i]+n)){
				cout << x << endl;
				return 0;
			}
		}
	}
	
	cout << 0 << endl;
	return 0;
}
