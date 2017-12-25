#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N и набор из N целых чисел. Вывести в том же по-
        //рядке номера всех нечетных чисел из данного набора и количество K таких
        //чисел.
        int n;
        cin >> n;
        int a,k=0;
        for (int i=0;i<n;i++){
          cin >> a;
          if (a%2==0){

          } else {
            cout << a << endl;
            k++;
          }
        }
        cout << k;
	return 0;
}
