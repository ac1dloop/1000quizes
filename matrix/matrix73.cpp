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

	bool flag=false;

	int i=0;
	for (int j=0;j<arr[0].size();++j){
//		cout << "iter: " << j << endl;
		bool pos=true;
		for (i=0;i<arr.size();++i){
			if (arr[i][j]>=0)
				pos=false;
		}
		if (pos)
			k=j,flag=true;
	}


	if (flag){
		for (int i=0;i<arr.size();++i){
			arr[i].insert(arr[i].begin()+k+1, {0});
		}
	}

	for (auto i: arr){
		for (auto j: i)
			cout << j << " ";
		cout << endl;
	}

	return 0;
}
