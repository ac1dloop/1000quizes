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

	wstring line;
	for (;wss >> line;){
		std::transform(line.begin()+1, line.end(), line.begin()+1, [&line](auto c){
				if (c==line.at(0))
					return L'.';
				else return c;
		});

		wcout << line << L"\n";
	}

	return 0;
}
