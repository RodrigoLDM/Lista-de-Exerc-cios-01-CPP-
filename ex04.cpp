//Rodrigo Limongi De Martini - 32021852

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR");

    int num;

    cout << "Digite um número: ";
    cin >> num;

    if (num % 2 == 0)
        cout << "O número digitado é par.";
    else
        cout << "O número digitado é ímpar.";
}