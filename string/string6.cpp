#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

const char* alphabet="abcdefghijklmnopqrstuvwxyz\n";
const char* alphabet_ru="абвгдежзийклмнопрстуфхцчшщыьъэюя\n";

int main()
{
	char n;
	cin >> n;

	for (int i=0;i<strlen(alphabet);++i)
		if (n==alphabet[i]){
			cout << "lat" << endl;
			return 0;
		}
	for (int i=0;i<strlen(alphabet_ru);++i)
		if (n==alphabet_ru[i]){
			cout << "rus" << endl;
			return 0;
		}

	if (isdigit(n))
		cout << "digit" << endl;

	return 0;
}
