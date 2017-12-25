#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N и набор из N вещественных чисел. Вывести сумму
        //и произведение чисел из данного набора.
        int n;
        cin >> n;
        double a,s=0,m=1;
        for (int i=0;i<n;i++){
          cin >> a;
          s+=a;
          m*=a;
        }
        cout << s << " " << m;
	return 0;
}
