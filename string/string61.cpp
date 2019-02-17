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

	wcin >> str;

	size_t d1=0;
	size_t d2=0;
	
	d2=str.rfind(L'\\');
	if (d2==string::npos){
		d2=str.rfind(L'/');
		if (d2==string::npos)
			cout << '\\' << endl;
	}
	
	d1=str.rfind(L'\\', d2-1);
	if (d1==string::npos)
		d1=str.rfind(L'/', d2-1);
	
	wcout << str.substr(d1+1, d2-d1-1) << endl;
		

	return 0;
}
