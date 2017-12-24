#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано вещественное число X и целое число N (> 0). Найти значение вы-
        //ражения
        //1 + X + X 2 /(2!) + ... + X N /( N ! )
        //( N ! = 1·2·...· N  ). Полученное число является приближенным значением
        //функции exp в точке X .
        int n;
        double x;
        cin >> x >> n;
        double r=x,s=1;
        for (int i=1;i<=n;i++){
          s+=r/i;
          r*=x;
        }
        cout << "s=" << s;
	return 0;
}
