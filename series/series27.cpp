#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N и набор из N вещественных чисел: A 1 , A 2 , ..., A N .
        //Вывести следующие числа:
        //A 1 , ( A 2  ) 2 , ..., ( A N–1  ) N–1 , ( A N  ) N .
        int n;
        cin >> n;
        double a;
        for (int i=0;i<n;i++){
          cin >> a;
          cout << pow(a,i+1) << endl;
        }
	return 0;
}
