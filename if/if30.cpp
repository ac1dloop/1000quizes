#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int digs(int x){
  int i=0;
  for (;x!=0;i++){
	  x/=10;
  }
  return i;
}

int main()
{
	//Дано целое число, лежащее в диапазоне 1–999. Вывести его строку-
	//описание вида «четное двузначное число», «нечетное трехзначное число»
	//и т. д.
	int x;
	cin >> x;
	const char* n="number";
	const char* o="odd ";
	const char* e="even ";
	if (digs(x)==1){
		if (x%2==0){
			cout << e << n;
		} else {
			cout << o << n;
		}
	} else if (digs(x)==2){
		if (x%2==0){
			cout << e << "double-digit " << n;
		} else {
			cout << o << "double-digit " << n;
		}
	} else {
		if (x%2==0){
			cout << e << "triple-digit " << n;
		} else {
			cout << o << "triple-digit " << n;
		}
	}
	return 0;
}
