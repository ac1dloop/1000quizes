#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N и набор из N положительных вещественных чисел.
        //Вывести в том же порядке дробные части всех чисел из данного набора
        //(как вещественные числа с нулевой целой частью), а также произведение
        //всех дробных частей.
        int n;
        cin >> n;
        double a;
        double s=1;
        for (int i=0;i<n;i++){
          cin >> a;
          s*=(a-floor(a));
          cout << a-floor(a) << endl;
        }
        cout << s;
	return 0;
}
