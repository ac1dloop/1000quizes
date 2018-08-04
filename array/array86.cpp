#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n,i,k;

    cin >> n >> k;
    int arr[n];
    int tarr[k];
	
    for (i=0;i<n;i++){
        cin >> arr[i];
    }
    for (i=0;i<k;i++){
    	tarr[i]=arr[i];
	}
	for (i=k;i<n;i++){
		arr[i-k]=arr[i];
	}
	for (int j=0,i=n-k;i<n;i++,j++){
		arr[i]=tarr[j];
	}
    
    
    for (i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
