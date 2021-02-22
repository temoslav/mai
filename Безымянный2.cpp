#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;

int main() {
    int x,y,c;
    cin>>x;
    y=0;
    c=0;
    while (x>0){
          c=c+1;
          y = y + x%10;
          x = x/10;
          }
          cout<<"kolvo="<<c<<"sum="<<y<<endl;
         getch();
         return 0;
          }
