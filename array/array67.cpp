#include <iostream>

using namespace std;

int main()
{
    int n,k=0;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    for (int i=n-1;i>=0;i--){
        if ((arr[i]%2!=0)&&k==0){
            k=arr[i];
        }
        if (arr[i]%2!=0)
            arr[i]+=k;
    }

    for (int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
