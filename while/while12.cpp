#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 1). Вывести наибольшее из целых чисел K , для
        //которых сумма 1 + 2 + ... + K будет меньше или равна N , и саму эту сумму.
        int n;
        cin >> n;
        int k=0;
        int i=1;
        while (k<=n){
          k+=i;
          i++;
        }
        k-=i;
        i--;
        cout << "k: " << i << "S: " << k;
	return 0;
}
