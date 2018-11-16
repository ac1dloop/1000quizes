#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <cctype>
#include <bitset>
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
	cin >> str;

	int res=0;
	for (int i=str.size()-1;i>=0;--i){
		res+=pow(2, str.size()-i-1)*chtoi(str[i]);
	}

	cout << res << endl;

	return 0;
}
