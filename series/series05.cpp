#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N и набор из N положительных вещественных чисел.
        //Вывести в том же порядке целые части всех чисел из данного набора (как
        //вещественные числа с нулевой дробной частью), а также сумму всех целых
        //частей.
        int n;
        cin >> n;
        double a;
        int s=0;
        for (int i=0;i<n;i++){
          cin >> a;
          a=(int)floor(a);
          s+=a;
          cout << a << endl;
        }
        cout << "s: " << s;
	return 0;
}
