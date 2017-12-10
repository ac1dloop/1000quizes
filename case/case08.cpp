#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Даны два целых числа: D (день) и M (месяц), определяющие правиль-
	//ную дату невисокосного года. Вывести значения D и M для даты, предше-
	//ствующей указанной.
	int a,b;
	cin >> a >> b;
        switch(a){
            case 1:
              if (b==3){
                cout << "28 2";
                break;
              } else if (b==5||b==7||b==10||b==12){
                cout << 30 << " " << b-1;
                break;
              } else {
                cout << 31 << " " << b-1;
              }
              break;
           default:
              cout << a-1 << " " << b;
        }
	return 0;
}
