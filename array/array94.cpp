#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n,i;

    cin >> n;
    int arr[n];
    for (i=0;i<n;i++){
    	cin >> arr[i];
	}
	
	for (i=1;i<n;i+=2){
		arr[i]=-1;
	}
    
    for (i=0;i<n;i+=2){
    	cout << arr[i] << " " << endl;
	}
	cout << endl;

    return 0;
}
