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

const wstring vowels=L"йуеаоэяиюЙУЕАОЭЯИЮ";

int main()
{
	setlocale(LC_ALL, "");
	wstring str;

	std::getline(wcin, str);
	cout << count_if(str.begin(), str.end(), [](auto c){
			if (vowels.find(c)!=wstring::npos)
				return true;
				else return false;
			}) << endl;
	return 0;

	wstringstream wss(str);
	int res=0;

	wstring line;
	for (;wss >> line;){
		res+=count_if(line.begin(), line.end(), ::iswpunct);
	}

	cout << res << endl;

	return 0;
}
