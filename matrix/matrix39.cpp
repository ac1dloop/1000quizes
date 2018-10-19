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
		bool diff=true;
		for (int i=0;i<n&&diff;++i)
			for (int k=i+1;k<n;++k)
				if (arr[i][j]==arr[k][j]){
					diff=false;
					break;
				}
		if (diff)
			++count;
	}

	cout << "count: " << count << endl;

	return 0;
}
