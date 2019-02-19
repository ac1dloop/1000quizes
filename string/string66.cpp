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
#include <deque>
using namespace std;


int main()
{
	setlocale(LC_ALL, "");
	wstring str;
	wstring chet=L"";
	wstring nechet=L"";

	std::getline(wcin, str, L'\n');

	for (int i=0,j=1;i<str.size();i+=2, j+=2){
		chet+=str[j];
		nechet+=str[i];
	}

	reverse(nechet.begin(), nechet.end());
		
	wcout << wstring(chet+nechet) << endl;

	return 0;
}
