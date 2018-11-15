#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
	int num=123374;

	string str=to_string(num);

	for (int i=str.size()-1;i>=0;i--)
		cout << str[i];

	cout << endl;

	return 0;
}
