#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N (> 1), а также первый член A и разность D арифме-
        //тической прогрессии. Сформировать и вывести массив размера N, содер-
        //жащий N первых членов данной прогрессии:
        //A, A + D, A + 2·D, A + 3·D, ... .
        int n,a,d;
        cin >> n >> a >> d;
        int arr[n];
        arr[0]=a;
        for (int i=1;i<n;i++)
          arr[i]=a+i*d;
        for (int i=0;i<n;i++)
          cout << arr[i] << " ";
        cout << endl;
	return 0;
}
