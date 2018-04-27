#include <iostream>

//ƒан массив размера N. Ќайти количество его промежутков монотонности (то есть участков, на которых его элементы возрастают или убывают).

using namespace std;

int main()
{
	int n,a,b,c=0;
	cin >> n;
	cin >> a;
	for (int i=0;i<n-1;i++){
		cin >> b;
		if (b<a||b>a)
			c++;
		a=b;
	}	
	cout << c;
}
