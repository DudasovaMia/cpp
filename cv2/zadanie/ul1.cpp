#include <iostream>
using namespace std;

// Vytvorte program realizujúci jednoduchú kalkulačku pracujúcu v obore prirodzených čísel s tým, 
// že pre jednotlivé operácie využijete funkcie. Program z konzoly umožní načítať 1. operand, 
// operáciu (+, -, *, /, ^ - umocňovanie) a 2. operand. Po zadaní 2. operandu sa výsledok vypíše na konzolu, 
// pripočíta do sčítacej pamäti a vypíše sa aj aktuálny obsah sčítacej pamäti. Výpis realizujte v hlavnej 
// funkcii main(). Ponúknite používateľovi možnosť zadať nové vstupné hodnoty alebo ukončiť program. Pre 
// sčítaciu pamäť využite globálnu premennú, ktorú budete modifikovať priamo z volanej funkcie. Pri celočíselnom 
// delení vypíšte podiel aj zvyšok po delení. Pre vrátenie viacerých hodnôt využite vlastnosť predávania argumentu 
// funkcie referenciou (viď príklad z prednášky). Vstupy nie je potrebné ošetrovať. 

int pamat[100];
int pocet = 0;

int scitaj(int a, int b)
{
    int vysledok = a + b;
    pamat[pocet] = vysledok;
    return vysledok;
}

int odcitaj(int a, int b)
{
    int vysledok = a - b;
    pamat[pocet] = vysledok;
    return vysledok;
}

int nasob(int a, int b)
{
    int vysledok = a * b;
    pamat[pocet] = vysledok;
    return vysledok;
}

int del(int a, int b, int &zvysok)
{
    int vysledok = a / b;
    zvysok = a % b;
    pamat[pocet] = vysledok;
    return vysledok;
}

int mocnina(int a, int b)
{
    int vysledok = 1;
    for (int i = 0; i < b; i++)
    {
        vysledok = vysledok * a;
    }
    pamat[pocet] = vysledok;
    return vysledok;
}

int main() {
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
            vysledok = scitaj(a, b);
            cout << "Vysledok: " << vysledok << endl;
        }
        else if (operacia == '-')
        {
            vysledok = odcitaj(a, b);
            cout << "Vysledok: " << vysledok << endl;
        }
        else if (operacia == '*')
        {
            vysledok = nasob(a, b);
            cout << "Vysledok: " << vysledok << endl;
        }
        else if (operacia == '/')
        {
            vysledok = del(a, b, zvysok);
            cout << "Vysledok: " << vysledok << endl;
            cout << "Zvysok: " << zvysok << endl;
        }
        else if (operacia == '^')
        {
            vysledok = mocnina(a, b);
            cout << "Vysledok: " << vysledok << endl;
        }
        pocet++;

        cout << "Scitacia pamat: ";
        for (int i = 0; i < pocet; i++)
        {
            cout << pamat[i] << " ";
        }
        cout << endl;

        cout << "Zadaj 'a' pre novy priklad, 'q' pre koniec: ";
        cin >> volba;
    }

    return 0;
}
