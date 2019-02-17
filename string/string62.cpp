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
	const wstring aupper=L"�������������������������������";
	const wstring alower=L"�������������������������������";

	wcin >> str;
	
	std::transform(str.begin(), str.end(), str.begin(), [](auto c){
			size_t d1=aupper.find(c);
			size_t d2=alower.find(c);
			
			if (d1==string::npos){
				if (d2>=alower.size()){
					c=alower[0];
				} else c=alower[d2+1];
			} else {
				if (d1>=aupper.size()){
					c=aupper[0];
				} else c=alower[d1+1];
			}
			return c;
	});
	
	wcout << str << endl;

	return 0;
}
