// Problema 1.4. Mostrar la salida de un programa.

#include <iostream>
using namespace std;

int main(){
	
// Los valores que se obtendrán por consola serán los siguientes:

// 26,6667

// Para la línea de cout alternativa el valor sería:

// -inf, al realizar una división entre cero en el último término -b/(5-a) = -3/0. Error en tiempo de ejecución.

// Comprobación: entre paréntesis la operación tal y como la ha ordenador C++

double a, b;
a=5; b=3;

	cout << 5 + (a * b) + (a / b) * 4 << endl;
	cout << 6 * (5 - b) + a - b / (5 - a) << endl;
	return 0;
}
