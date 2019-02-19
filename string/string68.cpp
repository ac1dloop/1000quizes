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
	string str;

	std::getline(cin, str, '\n');

	str.erase(remove_if(str.begin(), str.end(), ::isdigit), str.end());

	for (int i=0;i<str.size()-1;++i){
		if (::isspace(str[i+1]))
			continue;
		if (str[i+1]<str[i]){
			cout << str[i+1] << endl;
			break;
		}
	}
	cout << 0 << endl;

	return 0;
}
