#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 0). Найти сумму 1 N + 2 N–1 + ... + N 1 . Чтобы избе-
        //жать целочисленного переполнения, вычислять слагаемые этой суммы с
        //помощью вещественной переменной и выводить результат как веществен-
        //ное число.
        int n;
        cin >> n;
        double s=0;
        for (int i=1;i<=n;i++){
           s+=pow(i, n-i+1);
        }
        cout << "s=" << s;
	return 0;
}
