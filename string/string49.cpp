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
		std::transform(line.begin(), line.end()-1, line.begin(), [&line](auto c){
				if (c==line.at(line.size()-1))
					return L'.';
				else return c;
		});

		wcout << line << L"\n";
	}

	return 0;
}
