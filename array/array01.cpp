#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N (> 0). Сформировать и вывести целочисленный
        //массив размера N, содержащий N первых положительных нечетных чисел:
        //1, 3, 5, ...
        int n;
        cin >> n;
        int arr[n];
        for (int i=0,j=1;i<n;i++,j+=2)
          arr[i]=j;
        for (int i=0;i<n;i++)
          cout << arr[i] << " ";
        cout << endl;
	return 0;
}
