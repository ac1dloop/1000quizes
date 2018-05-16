#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main()
{
	int n,max=INT_MIN;
	int i1,i2;
	cin >> n;
	int arr[n];
	
	for (int i=0;i<n;i++)
		cin >> arr[i];
	
	for (int i=0;i<n;i++){
		int a=arr[i],b=arr[i+1];
		if (a+b>max){
			max=a+b;
			i1=i,i2=i+1;
		}
	}
	
	cout << arr[i1] << " " << arr[i2];
	
}
