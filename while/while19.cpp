#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 0). Используя операции деления нацело и взя-
        //тия остатка от деления, найти число, полученное при прочтении числа N
        //справа налево.
        int n;
        cin >> n;
        while (n>0){
          cout << n%10;
          n/=10;
        }
        cout << endl;
	return 0;
}
