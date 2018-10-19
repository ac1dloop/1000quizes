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

	sort(arr[0], arr[0]+n);

	int count=0;
	for (int i=1;i<m;++i){
		sort(arr[i], arr[i]+n);
		if (equal(arr[0], arr[0]+n, arr[i], arr[i]+n)){
			++count;
		}
	}

	cout << "count: " << count << endl;

	return 0;
}
