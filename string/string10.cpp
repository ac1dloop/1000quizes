#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const char* alphabet="abcdefghijklmnopqrstuvwxyz";

int main()
{
	string str;
	cin >> str;
	
	reverse(str.begin(), str.end());

	cout << str;

	return 0;
}
