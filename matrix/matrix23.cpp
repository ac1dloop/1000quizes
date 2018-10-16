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

	for (int i=0;i<m;++i){
		for (int j=0;j<n;++j){
			cin >> arr[i][j];
		}
	}


	for (int i=0;i<m;++i){
		cout << "Min: " << *min_element(arr[i], arr[i]+n) << endl;
	}
	return 0;
}
