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
		int max=std::numeric_limits<int>::min();
		for (int i=0;i<n;++i){
			if (arr[i][j]>max)
				max=arr[i][j];
		}
		cout << "max: " << max << endl;
	}

	return 0;
}
