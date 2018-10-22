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

	int pos_j;

	for (int i=0;i<m;++i){
		bool pos=true;
		for (int j=0;j<n;++j){
			if (arr[j][i]<0){
				pos=false;
				break;
			}
		}
		if (pos)
			pos_j=i;
	}

	for (int i=0;i<m;++i){
		swap(arr[i][0], arr[i][pos_j]);
	}

	for (int i=0;i<m;++i){
		for (int j=0;j<n;++j){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
