

#include <iostream>
using namespace std;


void funcion(int x = 10, int y = 20, int z = 30) {
	cout << "";
}

int producto(int x, int y, int &r) { // el & hace referencia al espacio de memoria
	r = x * y;
	return r;
}

void forito_descendente(int i) {
	cout << i << " ";
	if (--i)
		forito_descendente(i);

}
int main()
{

	// {Parametros por referencia}
		// producto
		int a = 5, b = 4, r;
		cout << a << " * " << b << " = " << producto(a, b, r)<< endl;
		cout << "r = " << r << endl;

	// {Recursión}
		// forito descendente
		forito_descendente(10);

   
}



