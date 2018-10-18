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

	int min=numeric_limits<int>::max();
	int n_j=0;

	for (int j=0;j<m;++j){
		int max=numeric_limits<int>::min();
		for (int i=0;i<n;++i){
			if (arr[i][j]>max)
				max=arr[i][j];
		}
		if (max<min)
			min=max;
	}

	cout << "min of max cols: " << min << endl;

	return 0;
}
