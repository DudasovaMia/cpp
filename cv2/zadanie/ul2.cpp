#include <iostream>
using namespace std;

// Vytvorte program pre vykreslenie japonskej zástavy v znakovej grafike (biela reprezentovaná nulou, červená 
// jednotkou). Z konzoly bude možné zadať veľkosť zástavy aj veľkosť kruhu.

#define RED "\033[31m"
#define RESET "\033[0m"

int main() {
    int velkost = 0;
    int polomer = 0;

    cout << "Zadaj velkost zastavy: ";
    cin >> velkost;
    cout << "Zadaj polomer kruhu: ";
    cin >> polomer;

    int stred = velkost / 2;

    for (int i = 0; i < velkost; i++)
    {
        for (int j = 0; j < velkost; j++)
        {
            int x = i - stred;
            int y = j - stred;

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
