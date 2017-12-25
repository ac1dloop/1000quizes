#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 0). Найти наименьшее целое положительное
        //число K , квадрат которого превосходит N : K 2 > N . Функцию извлечения
        //квадратного корня не использовать.
        int n;
        cin >> n;
        int k=1;
        while (k*k<n){
          k++;
        }

        cout << k;
	return 0;
}
