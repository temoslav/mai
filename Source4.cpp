#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int x;
    cout << "put kolvo" << endl;
    cin >> x;
    char simbol;
    for (int i = 0; i < x; ++i) {
        cin >> simbol;
        if ((simbol >= '0') && (simbol <= '9')) {
            sum += (int)simbol - 48;
        }

    }
    cout << "sum= " << sum << endl;
    return 0;
}