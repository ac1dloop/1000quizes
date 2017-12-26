#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N и набор из N вещественных чисел: A 1 , A 2 , ..., A N .
        //Вывести следующие числа:
        //( A 1  ) N , ( A 2  ) N–1 , ..., ( A N–1  ) 2 , A N .
        int n;
        cin >> n;
        double a;
        for (int i=0;i<n;i++){
          cin >> a;
          cout << pow(a,n-i) << endl;
        }
	return 0;
}
