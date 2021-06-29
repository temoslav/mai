#include <iostream>
using namespace std;
void initMas(int *imas, int size, int val)
{
    for (int i = 0; i < size; i++) {
        imas[i] = val;
        cout << imas[i] << endl;
    }
}
void proverka_ili_test(int imas, int size) {
    if (size > 99) {
        cout << "slomalsya :(" << endl;;
        system("PAUSE");
        exit(1);
    }
    else
    {
        cout << "proverka proidena )))))))" << endl;

    }
}
#include <iostream>
using namespace std;
int main()
{
    int imas[100];
    int size;
    int val;
    cout << "Vvedite size = ";
    cin >> size;
    proverka_ili_test(*imas, size);
    cout << "Vvedite val = ";
    cin >> val;
    initMas(imas, size, val);
    return 0;
}
