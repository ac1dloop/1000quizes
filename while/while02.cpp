#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Даны положительные числа A и B ( A > B  ). На отрезке длины A разме-
        //щено максимально возможное количество отрезков длины B (без наложе-28
        //ний). Не используя операции умножения и деления, найти количество от-
        //резков B , размещенных на отрезке A .
        double a,b;
        cin >> a >> b;
        int i=0;
        while (a>=b){
          a-=b;
          i++;
        }
        cout << "i= " << i;
	return 0;
}
