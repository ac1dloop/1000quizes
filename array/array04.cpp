#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N (> 1), а также первый член A и знаменатель D гео-
        //метрической прогрессии. Сформировать и вывести массив размера N, со-
        //держащий N первых членов данной прогрессии:
        //A, A·D, A·D 2 , A·D 3 , ... .
        int n,a,d;
        cin >> n >> a >> d;
        int arr[n];
        arr[0]=a;
        for (int i=1;i<n;i++)
          arr[i]=a*pow(d,i);
        for (int i=0;i<n;i++)
          cout << arr[i] << " ";
        cout << endl;
	return 0;
}
