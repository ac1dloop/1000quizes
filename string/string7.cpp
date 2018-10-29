#include <iostream>
#include <string>

using namespace std;

const char* alphabet="abcdefghijklmnopqrstuvwxyz";

int main()
{
	string str;
	cin >> str;

	cout << (int)str[0] << " " << (int)str[str.size()-1] << endl;

	return 0;
}
