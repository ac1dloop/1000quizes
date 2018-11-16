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
	string str;
	std::getline(cin, str, '\n');

	size_t pos=str.find(' ');

	if (pos!=string::npos){
		str=str.substr(pos+1, str.size());

		pos=str.find(' ');
		if (pos==string::npos){
			str="";
		} else {
			str=str.substr(0, pos+1);
		}
	}

	cout << str << endl;

	return 0;
}
