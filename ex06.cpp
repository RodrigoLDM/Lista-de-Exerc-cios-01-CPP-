//Rodrigo Limongi De Martini - 32021852

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR");

    int num;
    int fat = 1;

    cout << "Digite um número: ";
    cin >> num;

    for (int count = num; count > 0; --count)
    {
        fat = fat * count;
    }

    cout << num << "! = " << fat;
}