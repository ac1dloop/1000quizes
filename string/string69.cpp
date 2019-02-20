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
#include <stack>
#include <set>
using namespace std;

int main()
{
	string str;

	std::getline(cin, str, '\n');

	set<size_t> st_left;
	set<size_t> st_right;

	for (int i=0;i<str.size();++i){
		if (str[i]=='(')
			st_left.insert(i);
		if (str[i]==')')
			st_right.insert(i);
	}

	if (st_right.size()!=st_left.size())
		cout << -1 << endl;

	set<size_t>::iterator itl=st_left.begin();
	set<size_t>::iterator itr=st_right.begin();
	for (;itl!=st_left.end()&&itr!=st_right.end();++itl, ++itr){
		if (*itl>*itr)
			cout << (*itr)+1 << endl;
	}

	cout << 0 << endl;

	return 0;
}
