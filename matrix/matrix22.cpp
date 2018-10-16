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

	for (int j=1;j<m;j+=2){
		int Sum=0;
		for (int i=0;i<n;++i){
			Sum+=arr[i][j];
		}
		cout << "Sum: " << Sum << endl;
	}

	return 0;
}
