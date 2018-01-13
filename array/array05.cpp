#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N (> 2). Сформировать и вывести целочисленный
        //массив размера N, содержащий N первых элементов последовательности
        //чисел Фибоначчи F K :
        //F 1 = 1,
        //F 2 = 1,
        //F K = F K–2 + F K–1 , K = 3, 4, ... .
        int n;
        cin >> n;
        int arr[n];
        arr[0]=1;
        arr[1]=1;
        for (int i=2;i<n;i++)
          arr[i]=arr[i-1]+arr[i-2];
        for (int i=0;i<n;i++)
          cout << arr[i] << " ";
        cout << endl;
	return 0;
}
