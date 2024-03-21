#include <iostream>
using namespace std;
// main program 
int main()
{
    char op;
    float num1, nnum2;
    cout<<"Masukkan Operator: ";
    cin>>op;
    cout<<"\nMasukkan Bilangan ke -1: ";
    cin>>num1;
    cout<<"\nMAsukkan BIlangan ke -2: ";
    cin>>num2;

    switch (op)
    {
    case '+':
        cout<< num1 + nnum2:
        break;
    case '-':
        cout<< num1 - nnum2:
        break;
    case '*':
        cout<< num1 * nnum2:
        break;
    case '/':
        cout<< num1 / nnum2:
        break;
    default:
        cout<< "Eror operator is not correct";
    }
    return 0;
}

