#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        //Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N). Найти сум-
        //му элементов массива с номерами от K до L включительно.
        int n;
        cin >> n;
        int k,l;
        cin >> k >> l;
        int arr[n];
        for (int i=0;i<10;i++)
          cin >> arr[i];
        int s=0;
        for (int i=k-1;i<=l-1;i++)
          s+=arr[i];
        cout << s;
	return 0;
}
