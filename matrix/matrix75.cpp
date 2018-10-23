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

	vector<vector<int>> arr_copy;

	for (auto x: arr)
		arr_copy.push_back(x);

	for (int i=0;i<arr.size();++i){
		bool min=true;
		for (int j=0;j<arr[i].size();++j){
			min=true;
			if (i-1>=0&&j+1<arr[i].size())
				if (arr[i][j]<=arr[i-1][j+1]){
					min=false;
				}
			if (i+1<arr.size()&&j-1>=0)
				if (arr[i][j]<=arr[i+1][j-1]){
					min=false;
				}
			if (j+1<arr[i].size()&&i+1<arr.size())
				if (arr[i][j]<=arr[i+1][j+1]){
					min=false;
				}
			if (i-1>=0&&j-1>=0)
				if (arr[i][j]<=arr[i-1][j-1]){
					min=false;
				}
			if (i-1>=0)
				if (arr[i][j]<=arr[i-1][j]){
					min=false;
				}
			if (j-1>=0)
				if (arr[i][j]<=arr[i][j-1]){
					min=false;
				}
			if (i+1<arr.size())
				if (arr[i][j]<=arr[i+1][j]){
					min=false;
				}
			if (j+1<arr.size())
				if (arr[i][j]<=arr[i][j+1]){
					min=false;
				}
			if (min)
				arr_copy[i][j]*=-1;
		}
	}

	for (auto i: arr_copy){
		for (auto j: i)
			cout << j << " ";
		cout << endl;
	}

	return 0;
}
