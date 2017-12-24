#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 0). Найти сумму 1 1 + 2 2 + ... + N N . Чтобы избе-
        //жать целочисленного переполнения, вычислять слагаемые этой суммы с
        //помощью вещественной переменной и выводить результат как веществен-
        //ное число.
        int n;
        cin >> n;
        double S=0;
        for (int i=1;i<=n;i++){
          S+=pow(i,i);
        }
        cout << "S=" << S;
	return 0;
}
