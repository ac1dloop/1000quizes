#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
        //Дано целое число N и набор из N целых чисел. Найти номер перво-
        //го максимального нечетного числа из данного набора. Если нечетные чис-
        //ла в наборе отсутствуют, то вывести 0.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        int m=INT_MAX;
        for (int i=0;i<n;i++)
          if (arr[i]<m&&arr[i]%2!=0)
            m=arr[i];
        if (m==INT_MAX)
          cout << 0;
        else cout << m;
	return 0;
}
