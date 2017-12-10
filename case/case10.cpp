#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Робот может перемещаться в четырех направлениях («С» — север,
        //«З» — запад, «Ю» — юг, «В» — восток) и принимать три цифровые ко-
        //манды: 0 — продолжать движение, 1 — поворот налево, –1 — поворот на-
        //право. Дан символ C — исходное направление робота и целое число N —
        //посланная ему команда. Вывести направление робота после выполнения
        //полученной команды.
        int c,a;
        cin >> c >> a;
        switch(a){
          case 0:
          cout << char(c);
          break;
          case 1:
          if (c=='n'){
            c='w';
          } else if (c=='w'){
            c='s';
          } else if (c=='s'){
            c='e';
          } else if (c=='e'){
            c='n';
          }
          cout << char(c);
          break;
          case (-1):
          if (c=='n'){
            c='e';
          } else if (c=='e'){
            c='s';
          } else if (c=='s'){
            c='w';
          } else if (c=='w'){
            c='n';
          }
          cout << char(c);
          break;
        }
	return 0;
}
