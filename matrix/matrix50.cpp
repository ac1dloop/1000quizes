#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

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
		int max=numeric_limits<int>::min();
		int min=numeric_limits<int>::max();
		int max_i,max_j,min_i,min_j;
		for (int j=0;j<n;++j){
			if (arr[j][i]>max){
				max=arr[j][i];
				max_i=i;
				max_j=j;
			}
			if (arr[j][i]<=min){
				min=arr[j][i];
				min_i=i;
				min_j=j;
			}

		}
			swap(arr[max_j][max_i], arr[min_j][min_i]);
	}

	for (int i=0;i<m;++i){
		for (int j=0;j<n;++j){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
