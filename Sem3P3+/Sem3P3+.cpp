// Sem3P3+.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int  maximo = 80; 
    char cadena[80];
    cout << "Cadena: ";
    cin.getline(cadena, 80, '\n');
    cout << cadena << endl; 

    for (char * c = cadena ; *c != '\0'; ++c) {
        cout << "[" <<  * c << "]";
    }

    cout << endl;
    cout << "Longitud: " << strlen(cadena) << endl;
    if (strstr(cadena, "prueba"))
        cout << "Encontrado!" << endl;
    return 0; 

}

