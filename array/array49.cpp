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
	
	for (int i=0;i<n;i++)
		cin >> arr[i];
	
	for (int i=0;i<n;i++){
		if (arr[i]>n){
			cout << i;
			return 10;
		}
		for (int j=0;j<n;j++){
			if (i==j)
				continue;
			else if (arr[i]==arr[j]){
				cout << i;
				return 10;
			}
		}
	}
	cout << 0;
}
