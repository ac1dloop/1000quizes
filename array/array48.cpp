#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n,max=INT_MIN,c;
	cin >> n;
	int arr[n];
	
	for (int i=0;i<n;i++)
		cin >> arr[i];
	
	for (int i=0;i<n;i++){
		c=1;
		for (int j=0;j<n;j++){
			if (j==i)
				continue;
			else if (arr[j]==arr[i])
				c++;
		}
		if (c>max)
			max=c;
	}
	
	cout << max;
}
