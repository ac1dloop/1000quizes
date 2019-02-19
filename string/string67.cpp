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

	std::getline(wcin, str, L'\n');

	wstring chet=str.substr(0, str.size()/2);
	wstring nechet=str.substr(str.size()/2, str.size()-1);

	reverse(nechet.begin(), nechet.end());

	wstring res=L"";
	for (int i=0;i<str.size();++i){
		if (nechet.size()==0){
		} else {
			res+=nechet.front();
			nechet.erase(nechet.begin());
		}

		if (chet.size()==0){
		} else {
			res+=chet.front();
			chet.erase(chet.begin());
		}
	}

	wcout << res << endl;		

	return 0;
}
