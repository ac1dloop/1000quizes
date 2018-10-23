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

	for (int k=0;k<arr[0].size();++k){
		for (int j=0;j<arr[0].size()-1;++j){
			if (arr[arr[0].size()-1][j]<arr[arr[0].size()-1][j+1])
				for (int i=0;i<arr.size();++i)
					swap(arr[i][j], arr[i][j+1]);
				
		}
	}

	for (auto i: arr){
		for (auto j: i)
			cout << j << " ";
		cout << endl;
	}

	return 0;
}
