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

	size_t d=str.find_first_of(L"\\/");

	if (str.find_first_of(L"\\/", d+1)==wstring::npos)
		cout << "\\" << endl;
	else wcout << str.substr(d+1, str.find_first_of(L"\\/", d+1)-d-1) << endl;

	return 0;
}
