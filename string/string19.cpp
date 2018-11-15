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

	int k=-1;

	for (auto x: str){
		if (!isdigit(x)){
			if (x=='.'&&k!=2){
				k=2;
			} else {
				k=0;
				break;
			}
		} else {
			if (k!=2)
				k=1;
		}
	}

	cout << k << endl;

	return 0;
}
