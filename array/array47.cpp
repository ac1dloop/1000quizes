#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vec;
	int n,a,c=1;
	cin >> n;
	cin >> a;
	vec.push_back(a);
	vector<int>::iterator it;
	for (int i=0;i<n-1;i++){
		cin >> a;
		it=vec.begin();
		if ((it=find(vec.begin(),vec.end(), a))==vec.end())
			c++;
		vec.push_back(a);
	}
	
	cout << c;
}
