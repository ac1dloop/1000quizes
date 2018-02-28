#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дан массив размера N. Найти количество участкков, на которых его элементы монотонно убывают.
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        
        int c=0;
        for (int i=1;i<n;i++)
          if (arr[i-1]>arr[i])
            c++;
        cout << c;
	return 0;
}
