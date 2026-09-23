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

    for (int i = 0; i < dlzka; i++)
    {
        for (int j = 0; j < dlzka && i + j < 30; j++)
        {
            pole2[i][i + j] =
                meno[(dlzka - 1 - i + j) % dlzka];
        }
    }

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            cout << pole2[i][j];
        }

        cout << endl;
    }

    return 0;
}
