#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

const char* alphabet="abcdefghijklmnopqrstuvwxyz";

int main()
{
	string line;
	int n;

	std::getline(cin, line);

	reverse(line.begin(), line.end());
	
	size_t pos=line.find(' ');

	n=std::stol(line.substr(0, pos));
	string ast(n, '*');

	line=line.substr(pos, line.size());

	for (int i=line.size()-2;i!=0;--i){
		if (line.substr(i, n)==ast){
			cout << line[i+n] << line[i-1];
		}
	}
	cout << endl;

	return 0;
}
