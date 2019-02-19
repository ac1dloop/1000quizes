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
using namespace std;

stack<size_t> st;

int main()
{
	string str;

	std::getline(cin, str, '\n');

	for (int i=str.size()-1;i>=0;--i){
		if (str[i]==')')
			st.push(i);
		if (str[i]=='(')
			st.pop();
	}

	if (st.size()==0)
		cout << 0 << endl;
	else cout << st.top();

	return 0;
}
