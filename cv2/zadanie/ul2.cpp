#include <iostream>
using namespace std;

#define RED "\033[31m"
#define RESET "\033[0m"

int main() {
    int vyska = 0;
    int sirka = 0;
    int polomer = 0;

    cout << "Zadaj vysku zastavy: ";
    cin >> vyska;
    cout << "Zadaj sirku zastavy: ";
    cin >> sirka;
    cout << "Zadaj polomer kruhu: ";
    cin >> polomer;

    int stred_riadok = vyska / 2;
    int stred_stlpec = sirka / 2;

    for (int i = 0; i < vyska; i++)
    {
        for (int j = 0; j < sirka; j++)
        {
            int x = i - stred_riadok;
            int y = j - stred_stlpec;

            if (x * x + y * y <= polomer * polomer)
            {
                cout << RED << "1 " << RESET;
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}
