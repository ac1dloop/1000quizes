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

	for (auto x: str)
		if (isalpha(x)&&isupper(x))
			++a;

	cout << a << endl;

	return 0;
}
