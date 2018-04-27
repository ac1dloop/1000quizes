#include <iostream>
#include <cmath>
#include <climits>
//ƒано число R и массив A размера N. Ќайти элемент массива, который
//наиболее близок к числу R (то есть такой элемент AK, дл€ которого величина |AK Ц R| €вл€етс€ минимальной).

using namespace std;

int main()
{
	int r,n,a,min=INT_MAX,res;
	cin >> r >> n;
	for (int i=0;i<n;i++){
		cin >> a;
		if (abs(a-r)<min){
			min=abs(a-r);
			res=a;
		}
	}
	cout << res;
}
