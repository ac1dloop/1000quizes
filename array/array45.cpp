#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n,min=INT_MAX;
	int i1,i2;
	cin >> n;
	int arr[n];
	for (int i=0;i<n;i++)
		cin >> arr[i];
		
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (i==j)
				continue;
			else if (abs(arr[i]-arr[j])<min){
				min=abs(arr[i]-arr[j]);
				i1=i,i2=j;
			}
		}
	}
	cout << i1 << " " << i2;
}
