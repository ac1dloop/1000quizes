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

	int count=0;
	for (int i=0;i<m;++i){
		bool diff=true;
		for (int j=0;j<n;++j){
			for (int k=j+1;k<n&&diff;++k){
				if (arr[i][j]==arr[i][k]){
					diff=false;
					break;
				}
			}
		}
		if (diff)
			++count;
	}

	cout << "count: " << count << endl;

	return 0;
}
