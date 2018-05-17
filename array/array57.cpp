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
	
	for (int i=0;i<n;i++)
		cin >> arr[i];
	int j=0;
	for (int i=1;i<n;i+=2,j++)
		res[j]=arr[i];
	for (int i=0;i<n;i+=2,j++)
		res[j]=arr[i];
	for (int i=0;i<n;i++)
		cout << res[i] << " ";	
}
