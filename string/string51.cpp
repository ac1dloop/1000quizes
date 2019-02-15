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

	std::getline(wcin, str);
	wstringstream wss(str);
	set<wstring> res;

	wstring line;
	for (;wss >> line;){
		res.insert(line);
	}

	for (auto x: res)
		wcout << x << " ";
	cout << endl;

	return 0;
}
