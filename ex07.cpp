//Rodrigo Limongi De Martini - 32021852

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR");

    int listSize = 10;
    int list[listSize], highest, lowest;

    for (int i = 0; i < listSize; ++i)
    {
        cout << "Digite o " << i + 1 << "° número: ";
        cin >> list[i];
    }

    highest = list[0];
    lowest = list[0];

    for (int i = 0; i < listSize - 1; ++i)
    {
        if (highest < list[i + 1])
            highest = list[i + 1];
    }

    for (int i = 0; i < listSize - 1; ++i)
    {
        if (lowest > list[i + 1])
            lowest = list[i + 1];
    }

    cout << "O maior dos números informados é " << highest << ", enquanto o menor é " << lowest;
}