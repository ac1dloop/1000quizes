#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 0). С помощью операций деления нацело и взя-
        //тия остатка от деления определить, имеется ли в записи числа N цифра «2».
        //Если имеется, то вывести True, если нет — вывести False.
        int n;
        cin >> n;
        bool f=false;
        while (n>0){
          if (n%10==2){
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
