#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N и набор из N вещественных чисел. Вывести в том
        //же порядке округленные значения всех чисел из данного набора (как целые
        //числа), а также сумму всех округленных значений.
        int n;
        cin >> n;
        double a;
        double s=0;
        for (int i=0;i<n;i++){
          cin >> a;
          s+=ceil(a);
          cout << ceil(a) << endl;
        }
        cout << s;
	return 0;
}
