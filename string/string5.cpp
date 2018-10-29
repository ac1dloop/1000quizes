#include <iostream>

using namespace std;

const char* alphabet="abcdefghijklmnopqrstuvwxyz";

int main()
{
	int n;
	cin >> n;

	for (int i=0;i<n;++i)
		cout << (char)(alphabet[25-i]);

	return 0;
}
