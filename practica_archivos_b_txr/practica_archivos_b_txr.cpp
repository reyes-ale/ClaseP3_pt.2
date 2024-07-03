#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>

using namespace std;

struct Alumno {
    char nombre[50];
    int edad;
};

void escribirDatos( vector<Alumno>& alumnos) {
    ofstream archivoE("Datos.dat", ios::binary);

    if (!archivoE) {
        cerr << "Error al abrir el archivo para escritura." << endl;
        return;
    }

    for (int i = 0; i < alumnos.size(); i++) {
        archivoE.write(reinterpret_cast< char*>(&alumnos[i]), sizeof(Alumno));
    }

    archivoE.close();
}

vector<Alumno> leerDatos() {
    ifstream archivo("Datos.dat", ios::binary);

    if (!archivo) {
        cerr << "Error al abrir el archivo para lectura." << endl;
        return {};
    }

    vector<Alumno> alumnos;
    Alumno temp;

    while (archivo.read(reinterpret_cast<char*>(&temp), sizeof(Alumno))) {
        alumnos.push_back(temp);
    }

    archivo.close();
    return alumnos;
}

int main() {

    vector<Alumno> alumnos = {
        {"Emilio", 19},
        {"Ana", 20},
        {"Carlos", 21}
    };
    escribirDatos(alumnos); 


    vector<Alumno> alumnosLeidos = leerDatos();

    for (int i = 0; i < alumnosLeidos.size(); i++) {
        cout << alumnosLeidos[i].nombre << ": " << alumnosLeidos[i].edad << endl;
    }

    return 0;
}







//#include <iostream>
//#include <fstream>
//#include <cstring>
//
//using namespace std;
//
//struct Alumno {
//    char nombre[50];
//    int edad;
//};
//
//void escribirDatos() {
//    Alumno A;
//    strcpy_s(A.nombre, "Emilio");
//    A.edad = 19;
//
//    ofstream archivoE("Datos.dat", ios::binary);
//
//    if (!archivoE) {
//        cerr << "Error al abrir el archivo para escritura." << endl;
//        return;
//    }
//
//    archivoE.write(reinterpret_cast<const char*>(&A), sizeof(Alumno));
//    archivoE.close();
//}
//
//
//void leerDatos() {
//    ifstream archivo("Datos.dat", ios::binary);
//
//    if (!archivo) {
//        cerr << "Error al abrir el archivo para lectura." << endl;
//        return;
//    }
//
//    Alumno A1;
//    archivo.read(reinterpret_cast<char*>(&A1), sizeof(Alumno));
//
//    if (!archivo) {
//        cerr << "Error al leer los datos del archivo." << endl;
//        return;
//    }
//
//    cout << A1.nombre << ": " << A1.edad << endl;
//
//    archivo.close();
//}
//
//int main() {
//
//    escribirDatos();
//    //leerDatos();   
//    return 0;
//}


//#include <iostream>
//#include <fstream>;
//#include <iostream>
//#include <string>
//using namespace std; 
//
//void escribir(ofstream& archivo, string nombre, int edad) {
//    if (!archivo) {
//        cerr << "Error  al abrir para escribir";
//        exit(EXIT_FAILURE);
//    }
//    archivo << nombre << " " << edad << endl;
//}
//
//void leer(ifstream& archivo) {
//    if (!archivo) {
//        cerr << "Error  al abrir para leer";
//        exit(EXIT_FAILURE);
//    }
//    string nombre;
//    int edad;
//    while (archivo >> nombre >> edad) {//leer espacios
//        cout << "Nombre: " << nombre << " | Edad: " << edad << endl;
//    }
//}
//
//int main() {
//    /*ofstream archivo("personas.txt", ios::trunc);
//    escribir(archivo,"mauri",23);
//    escribir(archivo, "lola", 25);
//    archivo.clear();
//    archivo.close();
//
//    ifstream archivo2("personas.txt");
//    leer(archivo2);
//    archivo2.close(); */
//}