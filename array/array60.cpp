#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	int res[n];
	
	for (int i=0;i<n;i++){
		cin >> arr[i];
		res[i]=0;
	}
	for (int i=0;i<n;i++){
		for (int j=i;j<n;j++)
			res[i]+=arr[j];
	}
	for (int i=0;i<n;i++)
		cout << res[i] << " ";
}
