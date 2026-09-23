#include <iostream>
using namespace std;

int main() {
    char meno[] = "Mia Dudasova";
    char pole[30][30];
    int dlzka_mena = sizeof(meno) / sizeof(meno[0]) - 1;

    // inicializacne vyplnenie pola
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 30; j++) {
            pole[i][j] = '*';
        }
    }

    for (int i = 0; i < 30; i++) {
        // zapis mena do riadku
        for (int j = 0; j < dlzka_mena; j++) {
            int pozicia_mena = i + j;
            if (pozicia_mena >= 30) {
                pozicia_mena -= 30;
            }
            pole[i][pozicia_mena] = meno[j];
        }

        // rotacia mena
        char posledny_znak = meno[dlzka_mena - 1];
        for (int k = dlzka_mena - 1; k > 0; k--) {
            meno[k] = meno[k - 1];
        }
        meno[0] = posledny_znak;
    }

    // vypis pola
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 30; j++) {
            cout << pole[i][j];
        }
        cout << endl;
    }

    cout << endl;
    // ULOHA 2

    char znak1;
    char znak2;

    cout << "Zadaj prvy znak: ";
    cin >> znak1;
    cout << "Zadaj druhy znak: ";
    cin >> znak2;

    // zamena znakov
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 30; j++) {
            if (pole[i][j] == '*')
            {
                pole[i][j] = znak1;
            } else if (pole[i][j] != ' ')
            {
                pole[i][j] = znak2;
            }
        }
    }

    // vypis pola
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 30; j++) {
            cout << pole[i][j];
        }
        cout << endl;
    }

    return 0;
}