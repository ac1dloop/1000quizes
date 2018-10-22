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

	vector<vector<int>> arr(m);

	int a;
	for (int i=0;i<m;++i){
		for (int j=0;j<n;++j){
			cin >> a;
			arr[i].push_back(a);
		}
	}

	int min=numeric_limits<int>::max();
	int min_i;

	for (int i=0;i<m;++i){
		int r=*min_element(arr[i].begin(), arr[i].end());
		if (r<min){
			min=r;
			min_i=i;
		}
	}

	arr.erase(arr.begin()+min_i);

	for (auto i: arr){
		for (auto j: i)
			cout << j << " ";
		cout << endl;
	}

	return 0;
}
