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

	int a=0;

	for (int i=0;i<str.size();++i){
		if (str[i]==-47){
			if (str[i+1]<=-113&&str[i+1]>=-128){
				str[i]=-48;
				str[i+1]+=32;
			}
		} else if (str[i]==-48){
			if (str[i+1]>=-80&&str[i+1]<=-65){
				str[i+1]-=32;
			} else if (str[i+1]>=-112&&str[i+1]<=-97){
				str[i+1]+=32;
			} else if (str[i+1]>=-96&&str[i+1]<=-81){
				str[i]=-47;
				str[i+1]-=32;
			}
		} else if (islower(str[i])&&isalpha(str[i])){
			str[i]=toupper(str[i]);
		} else if (isupper(str[i])&&isalpha(str[i])){
			str[i]=tolower(str[i]);
		}
	}

	cout << str << endl;

	return 0;
}
