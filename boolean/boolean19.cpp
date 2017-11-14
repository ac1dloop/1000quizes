#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Проверить истинность высказывания: «Среди трех данных целых
	//чисел есть хотя бы одна пара взаимно противоположных».
	int a,b,c;
	cin >> a >> b >> c;
	cout <<((abs(a)==abs(b))||(abs(a)==abs(c))||(abs(b)==abs(c)));
	return 0;
}
