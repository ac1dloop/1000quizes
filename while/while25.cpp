#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 1). Найти первое число Фибоначчи, большее N .
        //(определение чисел Фибоначчи дано в задании While24).
        int n;
        cin >> n;
        bool f=false;
        int a=1;
        int b=1;
        double c=0;
        while (n>=c){
          c=a+b;
          a=b;
          b=c;
        }
        cout << c;
	return 0;
}
