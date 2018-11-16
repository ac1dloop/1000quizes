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

	if (str.find(str0)!=string::npos)
		cout << "True";
	else cout << "False";

	return 0;


	cout << str;

	return 0;
}
