#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n,i,k,l;

    cin >> n >> k >> l;
    vector<int> arr(n);
    
    for (i=0;i<n;i++){
    	cin >> arr[i];
	}
	
	arr.erase(arr.begin()+k, arr.begin()+l+1);
    
    for (auto x: arr){
    	cout << x << " ";
	}
	cout << endl;

    return 0;
}
