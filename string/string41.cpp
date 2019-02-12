#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <cctype>
#include <cmath>
#include <list>
using namespace std;

int main()
{
	string str;

	int i=0;
	std::getline(cin, str, '\n');
	bool valid_c=true;
	for (auto x: str){
		if (x==' '){
			if (!valid_c)
				continue;
			++i;
			valid_c=false;
		} else valid_c=true;
	}

	cout << i+1 << endl;

	return 0;
}
