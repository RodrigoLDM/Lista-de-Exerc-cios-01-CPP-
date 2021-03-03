//Rodrigo Limongi De Martini - 32021852

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR");

    string letra;

    cout << "Digite uma letra: ";
    cin >> letra;

    if ((letra == "a") || (letra == "e") || (letra == "o") || (letra == "i") || (letra == "u"))
        cout << "A letra digitada é uma vogal.";
    else
        cout << "A letra digitada é uma consoante.";
}