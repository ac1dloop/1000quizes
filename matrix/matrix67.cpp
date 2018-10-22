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

	for (int j=0;j<n;++j){
		bool pos=true;
		for (int i=0;i<arr.size();++i){
			if (arr[i][j]<0)
				pos=false;
		}
		if (pos){
			k=j;
			for (int i=0;i<arr.size();++i){
				arr[i].erase(arr[i].begin()+k);
			}
		}
	}


	for (auto i: arr){
		for (auto j: i)
			cout << j << " ";
		cout << endl;
	}

	return 0;
}
