#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n,k,t;

    cin >> n >> k;
    int arr[n];
	
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    
	for (int i=n-1;i!=k-1;i--){
    	arr[i]=arr[i-k];
	}
	for (int i=0;i<k;i++){
		arr[i]=0;
	}
    
    for (int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
