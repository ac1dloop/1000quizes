#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
        //Дано целое число N и набор из N целых чисел, упорядоченный по
        //возрастанию. Данный набор может содержать одинаковые элементы. Вы-
        //вести в том же порядке все различные элементы данного набора.
        int n;
        cin >> n;
        set<int> s;
        int a;
        for (int i=0;i<n;i++){
          cin >> a;
          s.insert(a);
        }
        for (int x: s){
          cout << x << " ";
        }        
	return 0;
}
