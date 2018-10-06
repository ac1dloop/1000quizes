#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int m,n;
	int k;

	cin >> m >> n;

	int arr[m][n];

	for (int i=0;i<n;++i){
		for (int j=0;j<m;++j){
			cin >> arr[i][j];
		}
	}

	for (int i=0;i<m;i+=2){
		for (int j=0;j<n;++j)
			cout << arr[i][j] << " ";
		cout << endl;
	}

	return 0;

	for (int i=0;i<n;++i){
		for (int j=0;j<m;++j){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
