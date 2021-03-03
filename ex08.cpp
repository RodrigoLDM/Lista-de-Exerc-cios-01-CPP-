//Rodrigo Limongi De Martini - 32021852

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR");

    int n;

    cout << "Digite a quantidade de números presentes na sequência: ";
    cin >> n;

    int sequence[n] = {1, 1};

    if (n > 2)
        for (int i = 0; i < n - 2; i++)
        {
            sequence[i + 2] = sequence[i] + sequence[i + 1];
        }

    cout << "Sequência de Fibonacci de n números: ";

    for (int i = 0; i < n; i++)
    {
        cout << sequence[i] << " ";
    }
}