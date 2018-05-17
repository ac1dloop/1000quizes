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
	
	vector<int> pos;
	vector<int> neg;
	
	for (int i=0;i<n;i++)
		if (arr[i]<0)
			neg.push_back(arr[i]);
		else pos.push_back(arr[i]);
	
	for (int i=0;i<pos.size();i++)
		cout << pos[i] << " ";
	for (int i=0;i<neg.size();i++)
		cout << neg[i] << " ";
}
