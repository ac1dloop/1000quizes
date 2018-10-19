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

	
	int count=0;
	for (int j=0;j<m;++j){
		bool flag=true;
		for (int i=1;i<n;++i){
			if (arr[i-1][j]<arr[i][j]){
				flag=false;
				break;
			}
		}
		if (flag)
			++count;
	}
	
	cout << "count: " << count << endl;

	return 0;
}
