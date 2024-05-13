#include <iostream>
using namespace std;    

int mayorMenor(int num1, int num2); 
int obtMayor(int num1, int num2);
int obtMenor(int num1, int num2);

int main(int argc, char const *argv[])
{
    int num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "El mayor es: " << mayorMenor(num1, num2) << endl;
    cout << "El menor es: " << mayorMenor(num1, num2) << endl;
    return 0;
}
