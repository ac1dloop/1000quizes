#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <cctype>
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

	int res=chtoi(str[0]);
	for (int i=1;i<str.size();++i){
		if (str[i]=='+')
			res+=chtoi(str[i+1]);
		else if (str[i]=='-')
			res-=chtoi(str[i+1]);
	}

	cout << res << endl;

	return 0;
}
