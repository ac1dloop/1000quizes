#include <iostream>
#include <string>

using namespace std;

const char* alphabet="abcdefghijklmnopqrstuvwxyz";

int main()
{
	int n;
   	char c1, c2;
	cin >> n >> c1 >> c2;

	string str="";

	for (int i=0;i<n/2;++i){
		str+=c1;
		str+=c2;
	}

	cout << str  << endl;

	return 0;
}
