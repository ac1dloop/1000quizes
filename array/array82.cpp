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
	
	int i;
	for (i=k;i<n;i++){
		arr[i-k]=arr[i];		
	}
	for (i=n-k;i!=n;i++){
		arr[i]=0;
	}
    
    for (int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
