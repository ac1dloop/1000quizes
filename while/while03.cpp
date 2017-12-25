#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Даны целые положительные числа N и K . Используя только операции
        //сложения и вычитания, найти частное от деления нацело N на K , а также
        //остаток от этого деления.
        int n,k;
        cin >> n >> k;
        int a=0,b;
        while (n>=k){
          n-=k;
          a++;
        }
        b=n;
        cout << a << " " << b;
	return 0;
}
