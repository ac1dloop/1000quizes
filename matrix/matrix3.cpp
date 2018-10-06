#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int m,n;

	cin >> m >> n;

	int arr1[m];

	for (int i=0;i<m;++i){
		cin >> arr1[i];
	}

	int arr[m][n];

	for (int i=0;i<n;++i){
		memcpy(arr[i], arr1, sizeof(arr1));
	}


	for (int i=0;i<n;++i){
		for (int j=0;j<m;++j){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
