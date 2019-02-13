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
	wstring res=L"";
	wstring str;

	std::getline(wcin, str);
	wstringstream wss(str);

	wstring line;
	for (;wss >> line;){
		res+=line+L".";
	}

	res=res.substr(0, res.size()-1);

	wcout << res << endl;

	return 0;
}
