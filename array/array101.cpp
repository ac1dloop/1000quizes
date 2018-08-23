#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    int n,i,k;

    cin >> n >> k;
    vector<int> arr(n);
    for (i=0;i<n;i++){
    	cin >> arr[i];
	}
	
	arr.insert(arr.begin()+k-1, 0);
	
	for (auto x: arr){
		cout << x << " ";
	}
	cout << endl;

    return 0;
}
