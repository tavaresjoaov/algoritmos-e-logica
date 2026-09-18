/* Faça um programa que mostre as tabuadas dos números de 1 a 10. */

#include <iostream>

using namespace std;

int main() {

    for (int i = 1; i <= 10; i++) {

        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }

        cout << endl;
    }

    return 0;
}

