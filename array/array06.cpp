#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Даны целые числа N (> 2), A и B. Сформировать и вывести целочислен-
        //ный массив размера N, первый элемент которого равен A, второй равен B, а
        //каждый последующий элемент равен сумме всех предыдущих.
        int n,a,b;
        cin >> n >> a >> b;
        int arr[n];
        arr[0]=a;
        arr[1]=b;
        for (int i=2;i<n;i++){
          arr[i]=0;
          for (int j=0;j<i;j++)
            arr[i]+=arr[j];
        }
        for (int i=0;i<n;i++)
          cout << arr[i] << " ";
        cout << endl;
	return 0;
}
