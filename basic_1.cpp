#include <iostream>
using namespace std;

int main()
{
    int a, b, o;
    double c = 10.3, d = 60.243;

    cout << "Este código recebe e exibe o valor de duas variaveis" << endl;
    cout << "Insira os valor de A:" << endl;
    cin >> a;
    cout << "Insira os valor de B:" << endl;
    cin >> b;
    cout << "Valor de A: " << a << endl 
    << "Valor de B: " << b << endl
    << "O que você quer fazer com estes valores? " << endl
    << "0. Somar" << endl
    << "1. Subtrair" << endl
    << "2. Dividir" << endl
    << "3. Multiplclar" << endl
    << "Digite uma opção válida: ";
    cin >> o;
    if(o == 0)
    {
        cout << "A soma dos valores é:" << a+b << endl;
    }
    
    else if (o == 1)
    {
        cout << "A Subtração dos valores é:" << a-b << endl;
    }
    
    else if (o == 2)
    {
        cout << "A Divisão dos valores é:" << a/b << endl;
    }

    else if (o == 3)
    {
        cout << "A Multipplicação dos valores é:" << a*b << endl;
    }

    else 
    {
        cout << "Opção inválida" << endl;
    }
    
    return 0;
    
}