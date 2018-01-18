#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дан массив размера N. Найти номера тех элементов массива, которые
        //больше своего левого соседа, и количество таких элементов. Найденные
        //номера выводить в порядке их убывания.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        vector<int> v;
        for (int i=0;i<n-1;i++)
          if (arr[i+1]>arr[i])
            v.push_back(i+1);
        
        for (int i=v.size()-1;i>=0;i--)
          cout << v[i] << " ";
	return 0;
}
