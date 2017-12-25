#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Даны положительные числа A , B , C . На прямоугольнике размера A × B
        //размещено максимально возможное количество квадратов со стороной C
        //(без наложений). Найти количество квадратов, размещенных на прямо-
        //угольнике. Операции умножения и деления не использовать.
        double a,b,c;
        cin >> a >> b >> c;
        int i=0;
        while (a>=c){
          a-=c;
          i++;
        }
        int j=0;
        while (b>=c){
          b-=c;
          j++;
        }
        cout << j*i;
	return 0;
}
