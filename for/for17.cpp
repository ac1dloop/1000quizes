#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано вещественное число A и целое число N (> 0). Используя один цикл,
        //найти сумму
        //1 + A + A 2 + A 3 + ... + A N .
        double a,s=0;
        double r=1;
        int n;
        cin >> a >> n;
        for (int i=0;i<n;i++){
          s+=r;
          r*=a;
        }
        cout << "s= " << s;
	return 0;
}
