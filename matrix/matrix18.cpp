#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	int m;
	int n;
	int k;

	cin >> m >> n >> k;

	int arr[m][n];

	for (int i=0;i<n;++i){
		for (int j=0;j<m;++j){
			cin >> arr[i][j];
		}
	}

	int Sum=0;
	int Mult=1;

	for (int i=0;i<n;++i){
		Sum+=arr[i][k-1];
		Mult*=arr[i][k-1];
	}



	cout << "Sum: " << Sum << endl;
	cout << "Mult: " << Mult << endl;

	return 0;
}
