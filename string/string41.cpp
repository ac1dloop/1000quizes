#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
	string line;
	std::getline(cin, line, '\n');

	stringstream ss(line);

	string str;
	int count=0;
	for (;std::getline(ss, str, ' ');){
		if (str.empty()||str.find(' ')!=string::npos){
		} else ++count;
	}

	cout << count << endl;

	return 0;
}
