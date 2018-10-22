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

	for (int i=0;i<n/2;++i){
		for (int j=0;j<m/2;++j){
			swap(arr[i][j], arr[i+n/2][j+n/2]);
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
