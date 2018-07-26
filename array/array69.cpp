#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n,i;

    cin >> n;

    int arr[n];

    for (i=n-1;i!=0;i--){
        cin >> arr[i];
    }


    for (i=0;i<n;i++)
        cout << arr[i] << "  ";
    cout << endl;

    return 0;
}
