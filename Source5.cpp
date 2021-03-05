#include <iostream>
#include <cctype>
using namespace std;
int main() {
    int x;
    int sum = 0;
    cout << "put kolvo" << endl;
    cin >> x;
    char simbol;
    for (int i = 0; i < x; ++i) {
        cin >> simbol;
        if ((simbol >= '0') && (simbol <= '9')) {
            sum += (int)simbol - 48;
        }
        else {
            cout << (char)tolower(simbol);
        }
    }
    cout << "sum= " << sum << endl;
    return 0;
}
