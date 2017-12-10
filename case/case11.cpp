#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Локатор ориентирован на одну из сторон света («С» — север, «З» —
        //запад, «Ю» — юг, «В» — восток) и может принимать три цифровые ко-
        //манды поворота: 1 — поворот налево, –1 — поворот направо, 2 — поворот
        //на 180°. Дан символ C — исходная ориентация локатора и целые числа N 1
        //и N 2 — две посланные команды. Вывести ориентацию локатора после
        //выполнения этих команд.
        int c,n1,n2;
        cin >> c >> n1 >> n2;
        switch(n1){
          case 1:
            if (c=='n'){
              c='w';
            } else if (c=='w'){
              c='s';
            } else if (c=='s'){
              c='e';
            } else {
              c='n';
            }
          break;
          case 2:
          if (c=='n'){
            c='s';
          } else if (c=='s'){
            c='n';
          } else if (c=='e'){
            c='w';
          } else {
            c='e';
          }
          break;
          default:
          if (c=='n'){
            c='e';
          } else if (c=='e'){
            c='s';
          } else if (c=='s'){
            c='w';
          } else {
            c='n';
          }
          break;
        }
switch(n2){
          case 1:
            if (c=='n'){
              c='w';
            } else if (c=='w'){
              c='s';
            } else if (c=='s'){
              c='e';
            } else {
              c='n';
            }
          break;
          case 2:
          if (c=='n'){
            c='s';
          } else if (c=='s'){
            c='n';
          } else if (c=='e'){
            c='w';
          } else {
            c='e';
          }
          break;
          default:
          if (c=='n'){
            c='e';
          } else if (c=='e'){
            c='s';
          } else if (c=='s'){
            c='w';
          } else {
            c='n';
          }
          break;
        }
        cout << (char)c;
	return 0;
}
