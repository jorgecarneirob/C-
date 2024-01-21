#include <iostream>
using namespace std;

int main()
{   
   
    for ( int i = 0; i < 3; i++)
    {
        
        int a, b;
        cout << "Insira um valor para a ou -1 para sair: ";
        cin >> a;
        if (a == -1)
        {
            break;
        }
        
        cout << "Insira um valor para b ou -1 para sair: ";
        cin >> b;
        if (b == -1)
        {
            break;
        }
        
        if ( a > b )
        {
            cout << "A é maior que B" << endl;
        }

        else if ( a == b)
        {
            cout << " A é igual a B" << endl;
        }

       else
        {
            cout << "A é menor que B" << endl;
        }


    }

}