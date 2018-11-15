#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
	string str;

	std::getline(cin, str, '\n');

	int a=0;

	for (int i=0;i<str.size();++i){
		if (str[i]==-47){
			if (str[i+1]<=-113&&str[i+1]>=-128)
				++a;
		} else if (str[i]==-48){
			if (str[i+1]>=-80&&str[i+1]<=-65)
				++a;
		} else if (islower(str[i])&&isalpha(str[i]))
			++a;
	}

	cout << a << endl;

	return 0;
}
