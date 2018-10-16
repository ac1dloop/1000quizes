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
		int Sum=0;
		int Mult=1;
		for (int i=0;i<n;++i){
			Mult*=arr[i][j];
		}
		cout << "Mult: " << Mult << endl;
	}

	return 0;
}
