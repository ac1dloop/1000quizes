#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 1). Найти наибольшее целое число K , при ко-
        //тором выполняется неравенство 3 K < N
        int n;
        cin >> n;
        int k=1;
        while (pow(3,k)<n){
          k++;
        }
        cout << --k;
	return 0;
}
