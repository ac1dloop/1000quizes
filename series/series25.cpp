#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N и набор из N целых чисел, содержащий по край-
        //ней мере два нуля. Вывести сумму чисел из данного набора, расположен-
        //ных между первым и последним нулем (если первый и последний нули
        //идут подряд, то вывести 0).
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
          cin >> arr[i];
        
        for (int i=0;arr[i]!=0;i++)
          arr[i]=0;

        for (int i=n-1;arr[i]!=0;i--)
          arr[i]=0;

        int s=0;
        for (int i=0;i<n;i++)
          s+=arr[i];

        cout << s;
	return 0;
}
