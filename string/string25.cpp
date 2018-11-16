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

	bitset<32> res(std::stoi(str));

	cout << res << endl;

	return 0;
}
