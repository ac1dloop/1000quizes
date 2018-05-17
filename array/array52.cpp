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
	int arr1[n],arr2[n];
	
	for (int i=0;i<n;i++)
		cin >> arr1[i];
		
	for (int i=0;i<n;i++){
		if (arr1[i]<5)
			arr2[i]=2*arr1[i];
		else arr2[i]=arr1[i]/2;
	}
	
	for (int i=0;i<n;i++)
		cout << arr2[i] << " ";
}
