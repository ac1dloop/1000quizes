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
		bool even=true;;
		std::for_each(arr[j], arr[j]+n, [&even](const int& v){
				if (v%2!=0)
				even=false;
				});
		if (even){
			cout << "found: " << j+1 << endl;
			return 0;
		}
	}

	cout << 0 << endl;
	return 0;
}
