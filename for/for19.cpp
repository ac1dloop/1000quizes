#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 0). Найти произведение
        //N ! = 1·2·...· N
        //( N–факториал  ). Чтобы избежать целочисленного переполнения, вычис-
        //лять это произведение с помощью вещественной переменной и вывести
        //его как вещественное число.
        int n;
        cin >> n;
        double r=1;
        for (int i=1;i<=n;i++){
          r*=i;
        }
        cout << "res= " << r;
	return 0;
}
