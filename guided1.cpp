#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Masukkan Operator (+, -, *, /): ";
    cin>>op;

    cout << "Masukkan Bilangan ke -1: ";
    cin>>num1;

    cout << "MAsukkan BIlangan ke -2: ";
    cin>>num2;

    cin >> num1 >> num2;


    switch (op) {
    case '+':
        cout<< num1 + num2;
        break;
    case '-':
        cout<< num1 - num2;
        break;
    case '*':
        cout<< num1 * num2;
        break;
    case '/':
        if (num2 != 0) {
            cout << "Result: " << fixed << setprecision(2) << num1/num2;
        } else {
            cout << "Error Division by zero is not allow.";
        }
        break;
    default:
        cout << "Eror operator is not correct";
    }
    return 0;
}

