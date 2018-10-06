#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int m,n,d;

	cin >> m >> n >> d;

	int arr1[n];

	for (int i=0;i<n;++i){
		cin >> arr1[i];
	}

	int arr[m][n];

	memcpy(arr[0], arr1, sizeof(arr1));

	for (int i=1;i<n;++i){
		for (int j=0;j<m;++j){
			arr[i][j]=arr[i-1][j]*d;
		}
	}

	for (int i=0;i<n;++i){
		for (int j=0;j<m;++j){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
