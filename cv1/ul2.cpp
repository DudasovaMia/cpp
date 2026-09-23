#include <iostream>
using namespace std;

int main()
{
    char meno[] = "Mia Dudasova";

    int dlzka = 0;

    while (meno[dlzka] != '\0')
    {
        dlzka++;
    }

    char pole2[30][30];

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            pole2[i][j] = '*';
        }
    }

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < dlzka; j++)
        {
            int pozicia = i + j;

            if (pozicia >= 30)
            {
                pozicia = pozicia - 30;
            }

            pole2[i][pozicia] = meno[j];
        }
    }

    char znak1;
    char znak2;

    cout << "Zadaj prvy znak: ";
    cin >> znak1;

    cout << "Zadaj druhy znak: ";
    cin >> znak2;

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            if (pole2[i][j] == '*')
            {
                pole2[i][j] = znak1;
            }
            else
            {
                pole2[i][j] = znak2;
            }
        }
    }

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            cout << pole2[i][j];
        }

        cout << "\n";
    }

    return 0;
}
