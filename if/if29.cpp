#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Дано целое число. Вывести его строку-описание вида «отрицательное чет-
	//ное число», «нулевое число», «положительное нечетное число» и т. д.
	int x;
	cin >> x;
	const char* str="number";
	if (x==0){
	  cout << "null " << str;  
	} else if (x<0){
		if (x%2==0){
		  cout << "negative " << "even " << str; 
		} else {
		  cout << "negative " << "odd " << str;
		}
	} else {
	 	if (x%2==0){
		  cout << "positive " << "even " << str; 
		} else {
		  cout << "positive " << "odd " << str;
		}
	}
	return 0;
}
