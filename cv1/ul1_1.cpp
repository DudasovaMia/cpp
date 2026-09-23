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
            pole2[i][(i + j) % 30] = meno[j];
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
