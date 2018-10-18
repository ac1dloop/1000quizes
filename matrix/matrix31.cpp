#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	int m;
	int n;

	cin >> m >> n;

	double arr[m][n];

	double avg=0;
	for (int i=0;i<n;++i){
		for (int j=0;j<m;++j){
			cin >> arr[i][j];
			avg+=arr[i][j];
		}
	}

	avg/=n*m;
	int n_i;
	int n_j;
	double diff=numeric_limits<int>::max();

	for (int i=0;i<n;++i){
		for (int j=0;j<m;++j){
			if (arr[i][j]-avg<diff){
				if (arr[i][j]-avg>=0){
					diff=arr[i][j]-avg;
				}
				n_i=i;
				n_j=j;
			}
		}
	}

	cout << "(" << n_i << "," << n_j << ")" << endl;	

	return 0;
}
