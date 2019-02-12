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
		if (line.at(0)==line.at(line.size()-1))
			++res;
	}

	cout << res << endl;

	return 0;
}
