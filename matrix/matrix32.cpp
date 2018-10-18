#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	int m;
	int n;

	cin >> m >> n;

	int arr[m][n];

	for (int i=0;i<n;++i){
		int pos=-1,neg=-1;
		for (int j=0;j<m;++j){
			cin >> arr[i][j];
			if (arr[i][j]<0)
				neg++;
			if (arr[i][j]>0)
				pos++;
		}
		++pos;
		++neg;
		if (pos==neg!=0){
			cout << "found: " << i+1 << endl;
			return 0;
		}
	}

	return 0;

	for (int j=0;j<m;++j){
		int pos=-1,neg=-1;
		std::for_each(arr[j], arr[j]+n, [&pos,&neg](const int& v){
				if (v<0)
				++neg;
				if (v>0)
				++pos;
				});
		++pos;
		++neg;
		if (pos==neg){
			cout << "found: " << j << endl;
			break;
		}
	}

	return 0;
}
