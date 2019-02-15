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
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	wstring str;

	std::getline(wcin, str);
	wstringstream wss(str);
	vector<wstring> res;

	wstring line;
	for (;wss >> line;){
		res.push_back(line);
	}

	for (auto it=res.rbegin();it!=res.rend();++it){
		wcout << *it << " ";
	}
	wcout << endl;

	return 0;
}
