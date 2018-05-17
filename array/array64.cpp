#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int a,int b)
{
	return (b<a);
}

int main()
{
	int n1,n2,n3;
	
	cin >> n1 >> n2 >> n3;
	
	vector<int> vec;
	int a;
	for (int i=0;i<(n1+n2+n3);i++){
		cin >> a;
		vec.push_back(a);
	}
	sort(vec.begin(), vec.end(), comp);
	
	for (int i=0;i<vec.size();i++)
		cout << vec[i] << " ";		
}
