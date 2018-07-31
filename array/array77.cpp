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

    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    for (int i=1;i<n-1;i++){
    	if (arr[i]<arr[i-1]&&arr[i]<arr[i+1]){
    		if (arr[i+2]<=arr[i+1]&&i!=n-2){
    			arr[i]*=arr[i];
			} else {
				arr[i]*=arr[i];
				i++;
			}
		}
	}

    for (int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
