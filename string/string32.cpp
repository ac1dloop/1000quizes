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

	cin >> str >> str0;

	size_t pos=str.find(str0);
	int s=0;
	for (;pos!=string::npos;pos=str.find(str0, pos+1)){
		++s;
	}

	cout << s << endl;

	return 0;
}
