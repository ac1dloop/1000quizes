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
		for (int j=0;j<m;++j){
			cin >> arr[i][j];
		}
	}

	
	int max=numeric_limits<int>::min();

	for (int j=0;j<m;++j){
		bool flag=true;

		/* check for descending order */
		for (int i=1;i<n;++i){
			if (arr[i-1][j]>=arr[i][j]){
				flag=false;
				break;
			}
		}

		/* check if ascending order only when its not descending */
		if (!flag){
			flag=true;
			for (int i=1;i<n;++i){
				if (arr[i-1][j]<arr[i][j]){
					flag=false;
					break;
				}
			}
		}

		if (flag){
			for (int i=0;i<n;++i){
				if (arr[i][j]>=max)
					max=arr[i][j];
			}
		}
	}

	if (max==numeric_limits<int>::min())
		cout << 0 << endl;
	cout << "max: " << max << endl;

	return 0;
}
