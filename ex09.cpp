//Rodrigo Limongi De Martini - 32021852

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR");

    int listSize = 10;
    int list[listSize];

    for (int i = 0; i < listSize; ++i)
    {
        cout << "Digite o " << i + 1 << "° número: ";
        cin >> list[i];
    }

    cout << "A ordem inversa dos números é: ";

    for (int i = 0; i < listSize; ++i)
    {
        cout << list[listSize - i - 1] << " ";
    }
}