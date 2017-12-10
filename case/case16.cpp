#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void pr(int i){
  if (i==0){
    cout << " god";
  } else if (i==1||i==2||i==3){
    cout << " goda";
  } else {
    cout << " let";
  }
}

int main()
{
        //Дано целое число в диапазоне 20–69, определяющее возраст (в годах).
        //Вывести строку-описание указанного возраста, обеспечив правильное со-
        //гласование числа со словом «год», например: 20 — «двадцать лет», 32 —
        //«тридцать два года», 41 — «сорок один год».
        int a;
        cin >> a;
        const char* en[9]={"odin", "dva", "tri", "chetyre", 
          "pyat", "shest", "sem", "vosem", "devyat"};
        
        const char* de[5]={"dvadcat ", "tridtsat ", "sorok ", "pisyat ", "shesyat "};

        int b=a/10;
        int t=a%10-1;
        switch(b){
          case 2:
          cout << de[0] << en[t];
          pr(t);
          break;
          case 3:
          cout << de[1] << en[t];
          pr(t);
          break;
          case 4:
          cout << de[2] << en[t];
          pr(t);
          break;
          case 5:
          cout << de[3] << en[t];
          pr(t);
          break;
          case 6:
          cout << de[4] << en[t];
          pr(t);
          break;
        }
	return 0;
}
