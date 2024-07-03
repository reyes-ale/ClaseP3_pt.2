#include "Ejemplo.h"

 Ejemplo :: Ejemplo (int a = 0) 
    : A(a){
     cout << A << endl; 
 }

void Ejemplo :: Modifica(int a) { 
    A = a; 
}

int Ejemplo ::Lee1()  { 
    return A; 
}

int Ejemplo :: Lee2() { 
    A++;
    return A; 
}

int Ejemplo :: Lee3() { 
    Modifica(3); 
    return A; 
}

