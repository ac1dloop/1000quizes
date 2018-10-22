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


	int min=numeric_limits<int>::max();
	int max=numeric_limits<int>::min();
	int min_i;
	int max_i;

	for (int i=0;i<m;++i){
		int mn=*max_element(arr[i], arr[i]+n);
		int	mx=*max_element(arr[i], arr[i]+n);
		if (mn<=min){
			min=mn;
			min_i=i;
		}
		if (mx>max){
			max=mx;
			max_i=i;
		}
	}

	for (int i=0;i<n;++i){
		swap(arr[max_i][i], arr[min_i][i]);
	}

	for (int i=0;i<m;++i){
		for (int j=0;j<n;++j){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
