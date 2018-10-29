#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const char* alphabet="abcdefghijklmnopqrstuvwxyz";

int main()
{
	string str;
	std::getline(cin, str);

	for (int i=1;i<str.size()-1;++i){
		if (str[i]==' '){
			cout << str[i-1] << str[i+1];
		}
	}
	cout << endl;

	return 0;
}
