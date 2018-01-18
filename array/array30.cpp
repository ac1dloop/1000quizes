#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дан массив размера N. Найти номера тех элементов массива, которые
        //больше своего правого соседа, и количество таких элементов. Найденные
        //номера выводить в порядке их возрастания.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        vector<int> v;
        for (int i=0;i<n-1;i++)
          if (arr[i]>arr[i+1])
            v.push_back(i+1);
        
        for (auto x:v)
          cout << x << " ";
	return 0;
}
