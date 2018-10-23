#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;


int main()
{
	int m;
	int n;
	int k=0;
	cin >> m >> n;

	vector<vector<int>> arr(m);

	int a;
	for (int i=0;i<m;++i){
		for (int j=0;j<n;++j){
			cin >> a;
			arr[i].push_back(a);
		}
	}

	for (int i=0;i<arr.size();++i){
		for (int j=0;j<arr.size()-1;++j){
			if (arr[j][0]>arr[j+1][0])
				swap(arr[j], arr[j+1]);
		}
	}

	for (auto i: arr){
		for (auto j: i)
			cout << j << " ";
		cout << endl;
	}

	return 0;
}
