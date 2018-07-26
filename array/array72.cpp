#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n,k,l;

    cin >> n >> k >> l;
    int arr[n];

    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    for (int i=k,j=l-1;i<(l-k)/2+k;i++,j--){
        swap(arr[i], arr[j]);
    }

    for (int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
