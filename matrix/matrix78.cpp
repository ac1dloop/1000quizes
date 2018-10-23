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
			int min1=*min_element(arr[j].begin(), arr[j].end());
			int min2=*min_element(arr[j+1].begin(), arr[j+1].end());
			if (min1<min2)
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
