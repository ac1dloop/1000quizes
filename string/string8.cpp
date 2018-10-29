#include <iostream>
#include <string>

using namespace std;

const char* alphabet="abcdefghijklmnopqrstuvwxyz";

int main()
{
	int n;
   	char c;
	cin >> n >> c;

	cout << string(n, c) << endl;

	return 0;
}
