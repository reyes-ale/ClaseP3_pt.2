#include <iostream>
#include <vector>
using namespace std; 

void vectores() {
    cout << "\nVectores \n";
    vector <int> ent1(2);
    vector<int> ent2(3);
    cout << "Escriba " << ent1.size() + ent2.size() << " enteros:" << endl;
    recibir_vector(ent1);
    recibir_vector(ent2);
    ent1.push_back(777);
    mostrar_vector(ent1);
    mostrar_vector(ent2);

    if (ent1 == ent2) {
        cout << "Son Iguales!" << endl;
    }
    else {
        cout << "no son Iguales!" << endl;
    }


    try {
        cout << ent1.at(4);// posicion fuera de rango
    }
    {
        catch (out_of_range)
    }

    cout << ent1[2] << endl;
    cout << ent1.at(2); //posicion
}

void apuntadores() {
    cout << "\nApuntadores \n";
    int *aPtr = NULL;
    imprimir(1, aPtr);
    aPtr = new int; 
    imprimir(2, aPtr);
    *aPtr = 333;
    imprimir(3, aPtr); 

    int a = 101; int* aPtr = &a; 
    imprimir(1, a, a, aPtr);

    *aPtr = 202;
    imprimir(2, a, a, aPtr);

    ++(*aPtr); 
    imprimir(3, a, a, aPtr);

    aPtr++;
    imprimir(4, a, a, aPtr);

    /*puntero = valor al que
    tipo * puntero hacia una direccion
    *nombre = contenido de la memoria*/
}

void imprimir(int p, int a, int& ra, int* aPtr) {
    cout << p << ": a=" << a << " &a=" << &a << " &ra=" << &ra;
    cout << " aPtr=" << aPtr << " *aPtr=" << *aPtr << endl; 
}           

void imprimir(int p, int* aPtr) {
    if (aPtr != NULL) {
        cout << p << ": aPtr=" << aPtr << " *aPtr=" << *aPtr;
    }
    cout << endl; 
}

void recibir_vector(vector <int> &elementos) {
    for (int &elemento : elementos) cin >> elemento;
}

void mostrar_vector(const vector <int> &elementos) {
    for (int elemento : elementos) cout << elemento << " ";
    cout << endl; 
    
}
int main()
{
    apuntdores();
    vectores(); 
    
    return 0;

}
