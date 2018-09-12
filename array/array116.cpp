#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int n;
    int i=0;
    cin >> n;
    int arr[n];
    set<int> elem;
    vector<int> seq;

    for (i=0;i<n;++i)
        cin >> arr[i];
    int t=1;
    for (i=1;i<=n;++i){
        if (arr[i]==arr[i-1])
            t++;
        else {
            seq.push_back(t);
            elem.insert(arr[i-1]);
            t=1;
        }
    }
     
    for (auto x: seq)
        cout << x << "  ";
    cout << endl;

    for (auto x: elem)
        cout << x << "  ";
    cout << endl;

    return 0;
}
