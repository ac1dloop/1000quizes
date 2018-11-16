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
	int n;
	cin >> n >> str;

	if (str.size()>n)
		str=str.substr(0, n);
	else {
		for (;str.size()!=n;)
			str.insert(str.begin(), '.');
	}

	cout << str << endl;

	return 0;
}
