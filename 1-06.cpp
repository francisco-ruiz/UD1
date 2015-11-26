// Problema 1.6. Comprobar el buen funcionamiento de un programa que calcula el cambio en céntimos de una transacción.

#include <iostream>
using namespace std;

int main (){
	
double precio, pagado; // almacena dos números reales, uno para el precio del artículo y otro para el importe pagado.
int centimos; // almacena en un número entero el número de céntimos sobrantes de la transacción.
	
	cout << "Escriba precio y dinero entregado: "; 
	cin >> precio >> pagado; // captura y almacena los valores del precio y del importe pagado, respectivamente.
	centimos = 100*(pagado-precio); // multiplica por 100 el importe de la diferencia entre importe pagado y el precio y lo almacena en la variable entera céntimos.
	cout << "Hay que devolver: " << centimos << " centimos" << endl; // muestra por pantalla el valor de la variable centimos.
	
// Al almacenar un valor real, como la diferencia entre precio y pagado, en una variable entera, se produce un truncamiento de la parte decimal del número entero, por lo que algunos valores pueden difererir. Para ello sería necesario que la variable centimos se almacenase en una variable real y que, posteriormente, se redondease el valor antes de mostrarlo por pantalla. Cabe destacar que, introduciendo los datos propuestos en el ejercicio, yo obtengo un resultado de 46 céntimos.

}
