#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <cctype>
#include <cmath>
using namespace std;

int chtoi(char c){
	const char* nums="0123456789";
	for (int i=0;i<sizeof(nums);++i)
		if (c==nums[i])
			return i;

	return c;
}

int main()
{
	string str;
	char n;
	cin >> n >> str;

	for (auto it=str.begin();it!=str.end();++it){
		if (*it==n){
			str.insert(it, n);
			++it;
		}
	}

	cout << str << endl;

	return 0;
}
