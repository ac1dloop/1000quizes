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
    
    sort(arr, arr+n);
    
    for (i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
