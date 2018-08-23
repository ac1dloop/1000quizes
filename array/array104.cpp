#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <limits>

using namespace std;


typedef vector<double> vec;
int main()
{
    int n,i,m,k;

    cin >> n >> k >> m;
    vec arr(n);
    for (i=0;i<n;i++){
    	cin >> arr[i];
	}
	
	vec zeroes(m, 0);
	arr.insert(arr.begin()+k-1, zeroes.begin(), zeroes.end());
	
	for (auto x: arr){
		cout << x << " ";
	}
	cout << endl;

    return 0;
}
