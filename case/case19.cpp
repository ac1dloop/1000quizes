#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
        //В восточном календаре принят 60-летний цикл, состоящий из 12-лет-
        //них подциклов, обозначаемых названиями цвета: зеленый, красный, жел-
        //тый, белый и черный. В каждом подцикле годы носят названия животных:
        //крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, ку-
        //рицы, собаки и свиньи. По номеру года определить его название, если 1984
        //год — начало цикла: «год зеленой крысы».
        int a;
        cin >> a;
        const char* an[]={"крысы", "коровы", "тигра", "зайца", "дракона", "змеи", "лошади",
        "овцы", "обезьяны", "курицы", "собаки", "свиньи"};
        const char* col[]={"зеленой", "красной", "желтой",  "белой", "черной"};
        const char* col2[]={"зелоного", "красного", "желтого", "белого", "черного"};
        a-=1984;
        if (a>60){
          a%=60;
        }
        int b=a/12;
        a=a%12;
        cout << "год ";
        switch(b){
          case 1:
            if (a==1||a==2||a==3){
              cout << col2[b] << " " << an[a];
            } else {
              cout << col[b] << " " << an[a];
            }
          break;
          case 2:
          if (a==1||a==2||a==3){
            cout << col2[b] << " " << an[a];
          } else {
            cout << col[b] << " " << an[a];
          }
          break;
          case 3:
          if (a==1||a==2||a==3){
            cout << col2[b] << " " << an[a];
          } else {
            cout << col[b] << " " << an[a];
          }
          break;
          case 4:
          if (a==1||a==2||a==3){
            cout << col2[b] << " " << an[a];
          } else {
            cout << col[b] << " " << an[a];
          }
          break;
          case 5:
          if (a==1||a==2||a==3){
            cout << col2[b] << " " << an[a];
          } else {
            cout << col[b] << " " << an[a];
          }
          break;
        }

	return 0;
}
