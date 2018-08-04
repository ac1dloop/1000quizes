#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n,t;

    cin >> n;
    int arr[n];
	
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    t=arr[n-1];
    for (int i=n-1;i!=0;i--){
    	arr[i]=arr[i-1];
	}
	arr[0]=t;
    
    for (int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
