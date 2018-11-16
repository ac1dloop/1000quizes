#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <cctype>
#include <cmath>
#include <list>
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
	string str, str0;
	char c;

	cin >> c >> str >> str0;

	list<char> ls(str.begin(), str.end());

	for (auto it=ls.begin();it!=ls.end();++it){
		if (*it==c){
			++it;
			ls.insert(it, str0.begin(), str0.end());
		}
	}

	str.resize(ls.size());
	copy(ls.begin(), ls.end(), str.begin());

	cout << str;

	return 0;
}
