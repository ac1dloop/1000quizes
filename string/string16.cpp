#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
	string str;

	std::getline(cin, str, '\n');

	int a=0;

	std::transform(str.begin(), str.end(),str.begin(), ::tolower);

	cout << str << endl;

	return 0;
}
