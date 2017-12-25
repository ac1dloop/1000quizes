#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число N (> 0). Если оно является степенью числа 3, то вы-
        //вести True, если не является — вывести False.
        int n;
        cin >> n;
        int a=3;
        for (int i=0;i<100;i++){
          if (n==a){
            cout << "TRUE";
            return 0;
          }
          a*=3;
        }
        cout << "FALSE";
        return 0;
        
}
