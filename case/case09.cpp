#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Даны два целых числа: D (день) и M (месяц), определяющие правиль-
        //ную дату невисокосного года. Вывести значения D и M для даты, следую-
        //щей за указанной.
        int a,b;
        cin >> a >> b;
        switch(a){
          case 28:
            if (b==2){
              cout << "1 3";
              break;
            } else {
              cout << a+1;
            }
          break;
          case 31:
          if (b==12){
            cout << 1 << " " << 1;
          } else {
            cout << 1 << " " << b+1; 
          }
          break;
          case 30:
          if (b==4||b==6||b==9||b==11){
            cout << 1 << " " << b+1;
          } else {
            cout << 31 << " " << b;
          }
          break;
          default:
          cout << a+1 << " " << b;
        }
	return 0;
}
