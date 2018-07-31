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
    int res[n];
    int avg;

    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    for (int i=0;i<n;i++){
    	if (i==0){
    		avg=(arr[i]+arr[i+1])/2;
    	} else if (i==n-1){
    		avg=(arr[i]+arr[i-1])/2;
		} else {
			avg=(arr[i-1]+arr[i]+arr[i+1])/3;
		}
		res[i]=avg;
	}

    for (int i=0;i<n;i++)
        cout << res[i] << " ";
    cout << endl;

    return 0;
}
