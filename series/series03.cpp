#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Даны десять вещественных чисел. Найти их среднее арифметическое.
        double a,s=0;
        for (int i=0;i<10;i++){
          cin >> a;
          s+=a;
        }
        s/=10;
        cout << s;
	return 0;
}
