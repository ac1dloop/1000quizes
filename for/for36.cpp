#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Даны целые положительные числа N и K . Найти сумму
        //1 K + 2 K + ... + N K .
        //Чтобы избежать целочисленного переполнения, вычислять слагаемые этой
        //суммы с помощью вещественной переменной и выводить результат как
        //вещественное число.
        int n,k;
        cin >> n >> k;
        double S=0;
        for (int i=1;i<=n;i++){
          S+=pow(i, k);
        }
        cout << "S= " << S;
	return 0;
}
