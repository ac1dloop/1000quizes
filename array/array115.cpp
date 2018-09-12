#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int i=0;
    cin >> n;
    int arr[n];
    int res[n];
    for (i=0;i<n;++i)
        cin >> arr[i];
    for (i=0;i<n;++i)
        res[i]=arr[i];

    for (i=0;i<n;++i){
        for (int j=0;j<n-1;++j){
            if (res[j]>res[j+1])
                swap(res[j], res[j+1]);
        }
    }
    
    for (auto x: res)
        cout << x << "  ";
    cout << endl;

    return 0;
}
