#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Даны десять вещественных чисел. Найти их произведение.
        double a,s=1;
        for (int i=0;i<10;i++){
          cin >> a;
          s*=a;
        }
        cout << s;
	return 0;
}
