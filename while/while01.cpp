#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Даны положительные числа A и B ( A > B  ). На отрезке длины A разме-
        //щено максимально возможное количество отрезков длины B (без наложе-
        //ний). Не используя операции умножения и деления, найти длину незанятой
        //части отрезка A .
        double a,b;
        cin >> a >> b;
        while (a>=b){
          a-=b;
        }
        cout << a;
	return 0;
}
