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
	string str1;
	string str2;
	string res="";
	int n1, n2;
	cin >> n1 >> n2 >> str1 >> str2;

	res+=str1.substr(0, n1);
	res+=str2.substr(str2.size()-n2, str2.size());

	cout << res << endl;

	return 0;
}
