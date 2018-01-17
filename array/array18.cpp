#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
        //Дан массив A ненулевых целых чисел размера 10. Вывести значение
        //первого из тех его элементов A K , которые удовлетворяют неравенству
        //A K < A 10 . Если таких элементов нет, то вывести 0.
        int arr[10];
        for (int i=0;i<10;i++)
          cin >> arr[i];
        for (int i=0;i<10;++i)
          if (arr[i]<arr[9]){
            cout << arr[i];
            return 0;
          }
        cout << 0;
	return 0;
}
