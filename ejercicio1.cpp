#include <iostream>
using namespace std;
int main()
{
    int edad;
    int *puntero= &edad;
    cout << "Ingrese su edad: ";
    cin>> *puntero;
    

    if (*puntero >=18)
    {
        cout << "Usted es mayor de edad, ";
    }else if (*puntero<0)
    {
        cout << "La edad ingresada es incorrecta, ";
    }else{
        cout << "Usted es menor de edad, ";
    }
    

    cout << "la edad ingresada es: "<< *puntero<< "\n";
    cout << "El espacio en el puntero es: "<< &puntero<< "\n";

    delete []puntero;
    puntero = NULL;

    return 0;
}