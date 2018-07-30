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
    int min=*min_element(arr,arr+n);
    int max=*max_element(arr,arr+n);
    
    for (int i=0;i<n;i++){
    	if (arr[i]==min){
    		for (int j=i;j<n;j++){
    			if (arr[j]==max){
    				int t=(j-i)/2;
    				for (int k=0;k<t+1;k++){
    					swap(arr[i++],arr[j--]);
					}
					goto end;
				}
			}
		}
	}
	end:;

    for (int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
