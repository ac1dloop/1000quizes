#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 0). Найти наибольшее целое число K , квадрат
        //которого не превосходит N : K 2 ≤ N . Функцию извлечения квадратного кор-
        //ня не использовать.
        int n;
        cin >> n;
        int k=n;
        while (k*k>n){
          k--;
        }
        cout << k;
	return 0;
}
