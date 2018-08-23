#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <limits>

using namespace std;


typedef vector<double> vec;
int main()
{
    int n,i;

    cin >> n;
    n+=2;
    vec arr(n);
    for (i=1;i<n-1;i++){
    	cin >> arr[i];
	}
	
	arr[0]=0;
	arr[n-1]=0;
	
	vec::iterator it_max=max_element(arr.begin()+1, arr.end()-1);
	vec::iterator it_min=min_element(arr.begin()+1, arr.end()-1);
	
	cout << *it_max << " " << *it_min << endl;
	
	if (it_max!=arr.end()){
		arr.pop_back();
		arr.insert(it_max+1, 0);
	}
	if (it_min!=arr.begin()+1){
		arr.erase(arr.begin(), arr.begin()+1);
		arr.insert(it_min-1, 0);
	}
	
	for (auto x: arr){
		cout << x << " ";
	}
	cout << endl;

    return 0;
}
