#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дано целое число N и набор из N целых чисел, содержащий по край-
        //ней мере два нуля. Вывести сумму чисел из данного набора, расположен-
        //ных между последними двумя нулями (если последние нули идут подряд,
        //то вывести 0).
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++){
          cin >> arr[i];
        }
        int s=0;
        for (int i=n-2;arr[i]!=0;i--){
          s+=arr[i];
        }
        cout << s;        
	return 0;
}
