#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int arr[n][n];

	for (int i=0;i<n;++i){
		for (int j=0;j<n;++j){
			cin >> arr[j][i];
		}
	}

	int it=1;
	for (int i=0;i<n-1;++i,it+=2);


	for (int k=0;k<n;++k){
		int tmp=0;
		int j=0;
		for (int i=0;i<it;++i){
			cout << arr[k+tmp][j++] << " ";
			if (j>n-k-1){
				j=n-k-1;
				tmp++;
			}
		}
		it-=2;
		cout << endl;
	}

	return 0;
}
