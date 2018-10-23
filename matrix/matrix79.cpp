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
			int max1=numeric_limits<int>::min();
			int max2=max1;
			for (int i=0;i<arr.size();++i){
				if (arr[i][j]>max1)
					max1=arr[i][j];
				if (arr[i][j+1]>max2)
					max2=arr[i][j+1];
			}

			if (max1>max2)
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
