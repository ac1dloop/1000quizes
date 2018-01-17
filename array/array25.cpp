#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дан массив ненулевых целых чисел размера N. Проверить, образуют
        //ли его элементы геометрическую прогрессию (см. задание Array4). Если
        //образуют, то вывести знаменатель прогрессии, если нет — вывести 0.
        int n;
        cin >> n;
        double arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];  
        
        for (int i=n-1;i>=2;i--){
          if (arr[i]/arr[i-1]!=arr[i-1]/arr[i-2]){
            cout << 0;
            return 0;
          }
        }
        cout << arr[n-1]/arr[n-2];
	return 0;
}
