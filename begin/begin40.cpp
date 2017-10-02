#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	//Найти решение системы линейных уравнений вида
	//A 1 · x + B 1 · y = C 1 ,
	//A 2 · x + B 2 · y = C 2 ,
	//заданной своими коэффициентами A 1 , B 1 , C 1 , A 2 , B 2 , C 2 , если известно, что
	//данная система имеет единственное решение. Воспользоваться формулами
	//x = ( C 1 · B 2 – C 2 · B 1  )/ D ,
	//y = ( A 1 · C 2 – A 2 · C 1  )/ D ,
	//где D = A 1 · B 2 – A 2 · B 1 .
	double a1,b1,c1,a2,b2,c2;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	double D=a1*b2-a2*b1;
	cout << (c1*b2-c2*b1)/D << " " << (a1*c2-a2*c1)/D << endl;
	return 0;
}
