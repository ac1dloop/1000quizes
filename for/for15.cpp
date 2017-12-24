#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано вещественное число A и целое число N (> 0). Найти A в степени N :
        //A N = A · A · ... · A
        //(числа A перемножаются N раз).
        double a;
        int n;
        cin >> a >> n;
        for (int i=1;i<n;i++){
          a*=a;
        }
        cout << "a: " << a;
	return 0;
}
