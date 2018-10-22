#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;


int main()
{
	int m;
	int n;
	int k;
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

	for (int i=0;i<arr.size();++i){
		for (int j=0;j<arr[i].size();++j){
			if (arr[i][j]<min){
				min=arr[i][j];
				k=j;
			}
		}
	}

	for (int i=0;i<arr.size();++i){
		arr[i].insert(arr[i].begin()+k, arr[i][k]);
	}

	for (auto i: arr){
		for (auto j: i)
			cout << j << " ";
		cout << endl;
	}

	return 0;
}
