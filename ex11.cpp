//Rodrigo Limongi De Martini - 32021852

#include <iostream>

using namespace std;

float MulViaAdd(float numReal, int numInt)
{
    int temp = 0;

    for (int i = 0; i < numInt; ++i)
    {
        temp = temp + numReal;
    }

    return temp;
}

int main()
{
    setlocale(LC_ALL, "pt_BR");

    float numReal;
    int numInt;

    cout << "Digite o primeiro número: ";
    cin >> numReal;

    cout << "Digite o segundo número: ";
    cin >> numInt;

    float result = MulViaAdd(numReal, numInt);

    cout << numReal << " * " << numInt << " = " << result;
}
