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
	int res=0;

	wstring line;
	for (;wss >> line;){
		if (line.size()>res)
			res=line.size();
	}

	cout << res << endl;

	return 0;
}
