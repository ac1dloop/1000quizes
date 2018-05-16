#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main()
{
	int r,n,min=INT_MAX;
	int i1,i2;
	cin >> r >> n;
	int arr[n];
	
	for (int i=0;i<n;i++)
		cin >> arr[i];
	
	for (int i=0;i<n-1;i++){
		int a=arr[i],b=arr[i+1];
		if (abs(a+b-r)<min){
			i1=i,i2=i+1;
			min=abs(a+b-r);
			if (min==0)
				break;
		}
	}
	
	cout << arr[i1] << " " << arr[i2];
	
}
