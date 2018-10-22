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

	int max=numeric_limits<int>::min();
	int max_i;

	for (int i=0;i<m;++i){
		int r=*max_element(arr[i].begin(), arr[i].end());
		if (r>max){
			max=r;
			max_i=i;
		}
	}

	arr.insert(arr.begin()+max_i ,arr[max_i]);

	for (auto i: arr){
		for (auto j: i)
			cout << j << " ";
		cout << endl;
	}

	return 0;
}
