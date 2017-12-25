#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 0). Используя операции деления нацело и взя-
        //тия остатка от деления, вывести все его цифры, начиная с самой правой
        //(разряда единиц).
        int n;
        cin >> n;
        while (n>0){
          cout << n%10 << endl;
          n/=10;
        }
	return 0;
}
