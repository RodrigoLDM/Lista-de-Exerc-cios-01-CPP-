//Rodrigo Limongi De Martini - 32021852

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR");

    int ds, dt, dv;

    cout << "Digite a distância percorrida, em quilômetros: ";
    cin >> ds;

    cout << "Digite o tempo em que a distância foi percorrida, em horas: ";
    cin >> dt;

    dv = ds / dt;

    cout << "A velocidade média do veículo é de " << dv << "km/h.";

    if (dv > 90)
        cout << "A velocidade média ficou acima do limite de 90km/h.";
    else
        cout << "A velocidade média ficou abaixo do limite de  0km/h.";
}