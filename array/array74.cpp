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
    for (int i=0;i<n;i++){
    	if (arr[i]==*min_element(arr, arr+n)){
    		for (int j=i+1;j<n;j++){
    			if (arr[j]!=*max_element(arr,arr+n)){
    				arr[j]=0;
				}
			}
			goto end;
		}
	}
	end:;

    for (int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
