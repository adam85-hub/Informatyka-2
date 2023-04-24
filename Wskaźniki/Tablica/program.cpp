#include <iostream>

using namespace std;

int main() {

    #define SIZE 10
    int tab[SIZE];

    for (int i = 0; i < SIZE; i++)
        tab[i] = i + 1;

        for (int *w = tab; w - tab < SIZE; w++) {
            cout << *w << endl;
        }

    return 0;
}
