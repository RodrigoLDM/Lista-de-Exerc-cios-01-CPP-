//Rodrigo Limongi De Martini - 32021852

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR");

    int x, y;

    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;

    if (3 * x + y - 8 == 0)
        cout << "O ponto (" << x << ", " << y << ") pertence a reta.";
    else
        cout << "O ponto (" << x << ", " << y << ") não pertence a reta.";
}