#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n=5;
	
	vector<int> vec;
	int a;
	for (int i=0;i<n*2;i++){
		cin >> a;
		vec.push_back(a);
	}
	sort(vec.begin(), vec.end());
	
	for (int i=0;i<vec.size();i++)
		cout << vec[i] << " ";		
}
