#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <limits>

using namespace std;

int main()
{
    int n;
    int i=0;

    cin >> n;
    int arr[n];
    for (i=0;i<n;++i){
    	cin >> arr[i];
	}
	
	
	for (i=n-1;i!=0;--i){
	int max=INT_MIN;
	int ind;
		for (int j=0;j<i+1;++j){
			if (arr[j]>max){
				max=arr[j];
				ind=j;
			}
		}
		swap(arr[ind], arr[i]);
	}
	
	for (auto x: arr){
		cout << x << " ";
	}
	cout << endl;

    return 0;
}
