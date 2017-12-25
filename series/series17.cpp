#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано вещественное число B , целое число N и набор из N веществен-
        //ных чисел, упорядоченных по возрастанию. Вывести элементы набора
        //вместе с числом B , сохраняя упорядоченность выводимых чисел.
        double b;
        int n;
        cin >> b >> n;
        double arr[n+1];
        arr[0]=b;
        for (int i=1;i<n+1;i++){
          cin >> arr[i];
        }
        sort(arr, arr+n+1);
        for (int i=0;i<n+1;i++){
          cout << arr[i] << " ";
        }                 
	return 0;
}
