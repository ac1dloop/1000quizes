#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	
	for (int i=0;i<n;i++)
		cin >> arr[i];
	
	vector<int> vec;
	
	for (int i=1;i<n;i+=2)
		vec.push_back(arr[i]);
		
	cout << vec.size() << endl;
	
	for (int i=0;i<vec.size();i++)
		cout << vec[i] << " ";
}
