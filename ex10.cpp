//Rodrigo Limongi De Martini - 32021852

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR");

    int listSize = 6;
    int list[listSize];

    for (int i = 0; i < listSize; ++i)
    {
        cout << "Digite o " << i + 1 << "° número: ";
        cin >> list[i];
    }

    cout << "Vetor : ";
    for (int i = 0; i < listSize; ++i)
    {
        cout << list[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < listSize; ++i)
    {
        for (int i = 0, temp = 0; i < listSize; ++i)
        {
            if (list[i] > list[i + 1])
            {
                temp = list[i + 1];
                list[i + 1] = list[i];
                list[i] = temp;
            }
        }
    }

    cout << "Vetor ordenado : ";
    for (int i = 0; i < listSize; ++i)
    {
        cout << list[i] << " ";
    }
}