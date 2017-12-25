#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int max(int a,int b){
  return (a>b?a:b);
}
int main()
{
        //Даны целые положительные числа A и B . Найти их наибольший об-
        //щий делитель (НОД), используя алгоритм Евклида :
        //НОД( A , B  ) = НОД( B , A mod B  ), если B ≠ 0;
        //НОД( A , 0 ) = A ,
        //где «mod» обозначает операцию взятия остатка от деления.
        int a,b;
        cin >> a >> b;
        while (a!=0&&b!=0){
          if (a>b){
            a=a%b;
          } else {
            b=b%a;
          }
        }
        cout << a+b;
	return 0;
}
