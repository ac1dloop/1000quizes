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
	list<wstring> res;

	wstring line;
	for (;wss >> line;){
		if (::iswalpha(line.at(0))){
			line[0]=::towupper(line.at(0));
		}
		res.push_back(line);
	}

	for (auto x: res)
		wcout << x << " ";
	cout << endl;	

	return 0;
}
