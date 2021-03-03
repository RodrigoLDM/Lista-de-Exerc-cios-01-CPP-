//Rodrigo Limongi De Martini - 32021852

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR");

    int valor1, valor2, temp;

    cout << "Digite o Valor 1: ";
    cin >> valor1;

    cout << "Digite o Valor 2: ";
    cin >> valor2;

    temp = valor1;
    valor1 = valor2;
    valor2 = temp;

    cout << "Valor 1: " << valor1 << "\n"
         << "Valor 2: " << valor2;
}
