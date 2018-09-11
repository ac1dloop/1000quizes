#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <limits>

using namespace std;

int main()
{
    int n,t;

    cin >> n;
    vector<int> arr;
    for (int i=0;i<n;i++){
    	cin >> t;
    	if (t>0){
    		arr.push_back(0);
		}
		arr.push_back(t);
	}
	
	for (auto x: arr){
		cout << x << " ";
	}
	cout << endl;

    return 0;
}
