#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n,cnt=0;
	cin >> n;
	int arr[n];
	
	for (int i=0;i<n;i++)
		cin >> arr[i];
		
	for (int i=0;i<n/2;i++){
		if (arr[i]>n/2)
			cnt++;
	}
	cout << cnt;
}
