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
/* changed a little */
const wstring alower=L"абвгдежзийклмнопрстуфхцчшщьъэюя";
const wstring aupper=L"АБВГДЕЖЗИЙКЛМНОПРСТУФХЦЧШЩЬЪЭЮЯ";

int main()
{
	setlocale(LC_ALL, "");
	wstring str;
	wstring num;
	int k;

	std::getline(wcin, str, L'\n');
	std::getline(wcin, num, L'\n');

	k=std::stoul(num);
	
	std::transform(str.begin(), str.end(), str.begin(), [&k](auto c){
			if (!::iswalpha(c))
				return c;

			size_t d1=aupper.find(c);
			size_t d2=alower.find(c);
			
			if (d1==string::npos){
				c=alower[(31+d2-k)%31];
			} else {
				c=aupper[(31+d1-k)%31];
			}
			return c;
	});
	
	wcout << str << endl;

	return 0;
}
