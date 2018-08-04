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
    for (i=n-k;i<n;i++){
    	tarr[n-i-1]=arr[i];
	}
	for (i=n-1;i!=0;i--){
		arr[i]=arr[i-k];
	}
	for (i=0;i<k;i++){
		arr[i]=tarr[k-i-1];
	}
    
    
    for (i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
