#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дан целочисленный массив A размера 10. Вывести порядковый номер
        //последнего из тех его элементов A K , которые удовлетворяют двойному не-
        //равенству A 1 < A K < A 10 . Если таких элементов нет, то вывести 0.
        int arr[10];
        for (int i=0;i<10;i++)
          cin >> arr[i];
        for (int i=9;i>=0;i--)
          if (arr[i]<arr[9]&&arr[i]>arr[0]){
            cout << arr[i];
            return 0;
          }
        cout << 0;
	return 0;
}
