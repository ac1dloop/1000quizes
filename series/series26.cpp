#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Даны целые числа K , N и набор из N вещественных чисел: A 1 , A 2 , ...,
        //A N . Вывести K -e степени чисел из данного набора:
        //( A 1  ) K , ( A 2  ) K , ..., ( A N  ) K .
        int k,n;
        cin >> k >> n;
        double a;
        for (int i=0;i<n;i++){
          cin >> a;
          cout << pow(a,k) << endl;
        }
	return 0;
}
