#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;

int main() {
string a;
cin >> a;
cout << a << " = ";
for (int i = 0; i < a.size(); i++) {
if (i != a.size() - 1)
{
cout << a[i] << "*10^" << a.size() - i - 1;
if (i < a.size() - 1) 
{
cout << " + ";
}
} else
 {
cout << a[i];
}
}
         getch();
         return 0;
          }
