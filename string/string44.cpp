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
	int res=0;
	wstring str;

	std::getline(wcin, str);
	wstringstream wss(str);

	wstring line;
	for (;wss >> line;){
		size_t d1=line.find(L'А');
		if (d1!=wstring::npos){
			size_t d2=line.find(L'А', d1+1);
			if (d2!=wstring::npos){
				if (line.find(L'А', d2+1)!=wstring::npos){
					++res;
				}
			}
		}

	}

	cout << res << endl;

	return 0;
}
