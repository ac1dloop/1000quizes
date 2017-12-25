#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 0). Используя операции деления нацело и взя-
        //тия остатка от деления, найти количество и сумму его цифр.
        int n;
        cin >> n;
        int i=0;
        int s=0;
        while (n>0){
          i++;
          s+=n%10;
          n/=10;
        }
        cout << i << " " << s;
	return 0;
}
