#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //Дано целое число в диапазоне 10–40, определяющее количество учеб-
        //ных заданий по некоторой теме. Вывести строку-описание указанного ко-
        //личества заданий, обеспечив правильное согласование числа со словами
        //«учебное задание», например: 18 — «восемнадцать учебных заданий»,
        //23 — «двадцать три учебных задания», 31 — «тридцать одно учебное за-
        //дание».
        int a;
        cin >> a;
        const char* ell[]={ "десять", "одиннадцать", "двенадцать", "тринадцать", "четырнадцать",
        "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать"};
        const char* ten[]={ "двадцать", "тридцать", "сорок" };
        const char* dig[]={"одно", "два", "три", "четыре", "пять","шесть", "семь",
        "восемь", "девять"}; 
        const char* nie="учебное задание";
        const char* nia="учебных задания";
        const char* niy="учебных заданий";
        
        int b=a/10;
        a=a%10;
        switch(b){
        case 1:
        cout << ell[a] << " " << niy;
        break;
        case 2:
        if (a==0){
          cout << "двадцать учебных заданий";
          break;
        }
        cout << ten[0] << " " << dig[a-1] << " ";
        if (a>1&&a<5){
          cout << nia;
        } else if (a==1){
          cout << nie;
        } else {
          cout << niy;
        }
        break;
        case 3:
        if (a==0){
          cout << "тридцать учебных заданий";
          break;
        }
        cout << ten[1] << " " << dig[a-1] << " ";
        
        if (a>1&&a<5){
          cout << nia;
        } else if (a==1){
          cout << nie;
        } else {
          cout << niy;
        }
        break;
        case 4:
        cout << "сорок учебных заданий";
        break;
        }

	return 0;
}