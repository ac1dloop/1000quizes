#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
        arr[i]+=k;
    }
    return 0;
}
