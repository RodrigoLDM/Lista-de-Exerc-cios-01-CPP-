//Rodrigo Limongi De Martini - 32021852

#include <iostream>
#include <cmath>

using namespace std;

bool AreCirclesColliding(float p1x, float p1y, float r1, float p2x, float p2y, float r2)
{
    float x = p2x - p1x;
    float y = p2y = p1y;

    if (x < 0)
        x = x * (-1);
    if (y < 0)
        y = y * (-1);

    float dist = sqrt((x * x) + (y * y));

    if (dist <= (r1 + r2))
        return true;
    else
        return false;
}

int main()
{
    setlocale(LC_ALL, "pt_BR");

    float p1x, p1y, r1, p2x, p2y, r2;

    cout << "Digite os valores x, y do centro da circunferência 1, respectivamente, separados por espaço: ";
    cin >> p1x >> p1y;
    cout << "Digite o valor do raio da circunferência 1: ";
    cin >> r1;

    cout << "Digite os valores x, y do centro da circunferência 2, respectivamente, separados por espaço: ";
    cin >> p2x >> p2y;
    cout << "Digite o valor do raio da circunferência 2: ";
    cin >> r2;

    bool result = AreCirclesColliding(p1x, p1y, r1, p2x, p2y, r2);

    if (result == true)
        cout << "True";
    else
        cout << "False";
}

//Sites usados de referência: http://www.cplusplus.com/reference/cmath/sqrt/ ; https://brasilescola.uol.com.br/matematica/distancia-entre-dois-pontos.htm