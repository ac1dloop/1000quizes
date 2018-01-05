#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 0). Используя один цикл, найти сумму
        //1 + 1/(1!) + 1/(2!) + 1/(3!) + ... + 1/( N ! )
        //(выражение N ! — N–факториал — обозначает произведение всех целых
        //чисел от 1 до N : N ! = 1·2·...· N ). Полученное число является приближен-
        //ным значением константы e = exp(1).
        int n;
        cin >> n;
        double s=0,r=1;
        for (int i=1;i<=n;i++){
          r*=i;
          s+=1/r;
        }
        cout << "s=" << s;
	return 0;
}