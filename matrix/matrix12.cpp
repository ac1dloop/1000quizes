#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int m,n;
	int k;

	cin >> m >> n;

	int arr[n][m];

	for (int i=0;i<n;++i){
		for (int j=0;j<m;++j){
			cin >> arr[i][j];
		}
	}

	for (int i=0;i<n;++i){
		for (int j=0;j<m;++j){
			if (j%2==0){
				cout << arr[i][j] << " ";
			} else {
				cout << arr[n-i-1][j] << " ";
			}
		}
		cout << endl;
	}


	return 0;
}
