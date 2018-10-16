#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	int m;
	int n;
	int k;

	cin >> m >> n >> k;

	int arr[m][n];

	for (int i=0;i<m;++i){
		for (int j=0;j<n;++j){
			cin >> arr[i][j];
		}
	}



	int Sum=std::accumulate(arr[k-1], arr[k-1]+n, 0);
	int Mult=std::accumulate(arr[k-1], arr[k-1]+n, 1, [](int sum,const int b){
			sum*=b;
			return sum;
			});
	cout << "Sum: " << Sum << endl;
	cout << "Mult: " << Mult << endl;

	return 0;
}
