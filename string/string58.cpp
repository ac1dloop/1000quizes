#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <cctype>
#include <cmath>
#include <list>
#include <locale>
#include <sstream>
#include <set>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	wstring str;

	wcin >> str;

	size_t slash=str.rfind(L'/');

	if (slash==wstring::npos)
		slash=str.rfind(L'\\');

	if (slash==wstring::npos)
		wcout << str.substr(0, str.find(L'.')-1) << endl;
	else wcout << str.substr(slash+1, str.find(L'.', slash)-slash-1) << endl;

	return 0;
}
