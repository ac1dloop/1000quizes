#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;


int main()
{
	int m;
	cin >> m;

	int arr[m][m];
	for (int i=0;i<m;++i){
		for (int j=0;j<m;++j){
			cin >> arr[i][j];
		}
	}
	int S=0;

	for (int i=0,j=m-1;i<m;++i,--j){
		S+=arr[i][j];
	}

	cout << "sum: " << S/m << endl;

	return 0;
}
