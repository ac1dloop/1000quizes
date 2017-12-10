#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void pr(int i){
  switch(i){
    case 1:
      cout << " pik";
      break;
    case 2:
      cout << " tref";
      break;
    case 3:
      cout << " buben";
      break;
    case 4:
      cout << " chervey";
      break;
  } 
}

int main()
{
        //Мастям игральных карт присвоены порядковые номера: 1 — пики,
        //2 — трефы, 3 — бубны, 4 — червы. Достоинству карт, старших десятки,
        //присвоены номера: 11 — валет, 12 — дама, 13 — король, 14 — туз. Даны
        //два целых числа: N — достоинство (6 ≤ N ≤ 14) и M — масть карты
        //(1 ≤ M ≤ 4). Вывести название соответствующей карты вида «шестерка бу-
        //бен», «дама червей», «туз треф» и т. п.
        int a,c;
        cin >> a >> c;
        switch(a){
          case 1:
          cout << "edinica";
          pr(c);
          break;
          case 2:
          cout << "dvoika";
          pr(c);
          break;
          case 3:
          cout << "troika";
          pr(c);
          break;
          case 4:
          cout << "chetverka";
          pr(c);
          break;
          case 5:
          cout << "pyaterka";
          pr(c);
          break;
          case 6:
          cout << "shesterka";
          pr(c);
          break;
          case 7:
          cout << "semyorka";
          pr(c);
          break;
          case 8:
          cout << "vosmerka";
          pr(c);
          break;
          case 9:
          cout << "devyatka";
          pr(c);
          break;
          case 10:
          cout << "desyatka";
          pr(c);
          break;
          case 11:
          cout << "valet";
          pr(c);
          break;
          case 12:
          cout << "dama";
          pr(c);
          break;
          case 13:
          cout << "korol";
          pr(c);
          break;
          case 14:
          cout << "tuz";
          pr(c);
          break;
        }
	return 0;
}
