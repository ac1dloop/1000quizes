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

	for (int j=m-1;j>=0;--j){
		int neg=-1,pos=-1;
		for (int i=0;i<n;++i){
			if (arr[i][j]<0)
				++neg;
			if (arr[i][j]>0)
				++pos;
		}
		++pos;
		++neg;
		if (pos==neg!=0){
			cout << "found: " << j+1 << endl;
			return 0;
		}
	}

	cout << 0 << endl;
	return 0;
}
