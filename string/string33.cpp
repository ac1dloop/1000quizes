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

	if (pos!=string::npos)
		str.erase(pos, str0.size());

	cout << str << endl;

	return 0;
}
