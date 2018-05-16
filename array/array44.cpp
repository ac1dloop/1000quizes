#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n,a;
	cin >> n;
	int arr[n];
	for (int i=0;i<n;i++)
		cin >> arr[i];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (i==j)
				continue;
			else if (arr[i]==arr[j]){
				cout << i << " " << j;
				i=n-1;
				break;
			}
		}
	}
}
