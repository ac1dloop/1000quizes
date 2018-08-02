#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;

    cin >> n;
    int arr[n];
	
	cin >> arr[0];
    for (int i=0;i<n-1;i++){
        cin >> arr[i];
    }
    arr[n-1]=0;
    
    for (int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
