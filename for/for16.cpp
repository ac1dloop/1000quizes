#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано вещественное число A и целое число N (> 0). Используя один
        //цикл, вывести все целые степени числа A от 1 до N .
        double a;
        int n;
        cin >> a >> n;
        double r=a;
        for (int i=0;i<n;i++){
          cout << r << endl;
          r*=a;
        }
	return 0;
}
