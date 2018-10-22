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

	for (int i=0;i<m;++i){
		for (int j=0;j<n;++j){
			cin >> arr[i][j];
		}
	}

	for (int i=n/2;i<n;++i){
		for (int j=0;j<m/2;++j){
			swap(arr[i][j], arr[j][i]);
		}
	}

	for (int i=0;i<m;++i){
		for (int j=0;j<n;++j){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
