#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 0). С помощью операций деления нацело и взя-
        //тия остатка от деления определить, имеются ли в записи числа N нечетные
        //цифры. Если имеются, то вывести True, если нет — вывести False.
        int n;
        cin >> n;
        bool f=false;
        while (n>0){
          if ((n%10)%2!=0){
            cout << "TRUE";
            f=true;
            break;
          }
          n/=10;
        }
        if (!f)
          cout << "FALSE";
	return 0;
}
