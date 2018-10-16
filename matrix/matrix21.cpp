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


	for (int i=0;i<m;i+=2){
		cout << "Avg: " << (std::accumulate(arr[i], arr[i]+n, 0)/m) << endl;
	}
	return 0;
}
