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
	int min=numeric_limits<int>::max();
	for (int i=0;i<m;++i){
		if (is_sorted(arr[i], arr[i]+n)||is_sorted(arr[i], arr[i]+n, [](const int& a, const int& b){
					return a>=b;
					}))
			min=std::min(min, *min_element(arr[i], arr[i]+n));
	}

	if (min==numeric_limits<int>::max())
		cout << 0 << endl;
	else cout << "min: " << min << endl;

	return 0;
}
