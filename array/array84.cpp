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
    
    t=arr[0];
    for (int i=0;i!=n-1;i++){
    	arr[i]=arr[i+1];
	}
	arr[n-1]=t;
    
    for (int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
