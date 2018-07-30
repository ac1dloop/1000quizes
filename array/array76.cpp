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
		if (arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
			if (arr[i+1]>arr[i+2]&&i!=n-2){
				arr[i]=0;
				i++;
				continue;
			} else {
				arr[i]=0;
			}	
		}
	}

    for (int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
