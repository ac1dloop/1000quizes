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
	
	for (i=0;i<n;++i){
		for (int j=0;j<n-1;++j){
			if (arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	
	for (auto x: arr){
		cout << x << " ";
	}
	cout << endl;

    return 0;
}
