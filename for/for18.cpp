#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано вещественное число A и целое число N (> 0). Используя один цикл,
        //найти значение выражения
        //1 – A + A 2 – A 3 + ... + (–1) N · A N .
        //Условный оператор не использовать.
        double a,s=0;
        int n;
        cin >> a >> n;
        double r=1;
        for (int i=0;i<n;i++){
         s+=r;
         r*=a*(-1); 
        }
        cout << "s= " << s;
	return 0;
}
