#include <iostream>
using namespace std;

int pamat = 0;

int scitanie(int a, int b)
{
    int vysledok = a + b;
    pamat = pamat + vysledok;
    return vysledok;
}

int odcitanie(int a, int b)
{
    int vysledok = a - b;
    pamat = pamat + vysledok;
    return vysledok;
}

int nasobenie(int a, int b)
{
    int vysledok = a * b;
    pamat = pamat + vysledok;
    return vysledok;
}

int delenie(int a, int b, int &zvysok)
{
    int vysledok = a / b;
    zvysok = a % b;
    pamat = pamat + vysledok;
    return vysledok;
}

int umocnenie(int a, int b)
{
    int vysledok = 1;
    for (int i = 0; i < b; i++)
    {
        vysledok = vysledok * a;
    }
    pamat = pamat + vysledok;
    return vysledok;
}

int main()
{
    char volba = 'a';

    while (volba == 'a')
    {
        int a = 0;
        int b = 0;
        int vysledok = 0;
        int zvysok = 0;
        char operacia = '+';

        cout << "Zadaj 1. operand: ";
        cin >> a;
        cout << "Zadaj operaciu (+, -, *, /, ^): ";
        cin >> operacia;
        cout << "Zadaj 2. operand: ";
        cin >> b;

        if (operacia == '+')
        {
            vysledok = scitanie(a, b);
            cout << "Vysledok: " << vysledok << endl;
        }
        else if (operacia == '-')
        {
            vysledok = odcitanie(a, b);
            cout << "Vysledok: " << vysledok << endl;
        }
        else if (operacia == '*')
        {
            vysledok = nasobenie(a, b);
            cout << "Vysledok: " << vysledok << endl;
        }
        else if (operacia == '/')
        {
            vysledok = delenie(a, b, zvysok);
            cout << "Vysledok: " << vysledok << endl;
            cout << "Zvysok: " << zvysok << endl;
        }
        else if (operacia == '^')
        {
            vysledok = umocnenie(a, b);
            cout << "Vysledok: " << vysledok << endl;
        }

        cout << "Scitacia pamat: " << pamat << endl;

        cout << "Zadaj 'a' pre novy priklad, 'q' pre koniec: ";
        cin >> volba;
    }

    return 0;
}
