#include <iostream>
using namespace std;

int main ()
{
    int a, b;
    double c = 10.3, d = 60.234;

    cout << "Este codigo recebe o valor das variaveis e compara" << endl;
    cout << "Insira o valor de a: ";
    cin >> a;
    cout << "Insira o valor de b: ";
    cin >> b;

    if ( a > b )
    {
        cout << "A é maior que B! ";
    }

    else if (a == b )
    {
        cout << "A é igual a B! ";
    }

    else
    {
        cout << "B é maior que A! ";
    }

    return 0;
}