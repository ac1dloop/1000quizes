#include <iostream>

using namespace std;

int main()
{
	int m,n;
	cin >> m >> n;
	int arr[m][n];

	for (int i=0;i<n;++i){
		for (int j=0;j<m;++j){
			arr[i][j]=10*(i+1);
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
