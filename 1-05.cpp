//Ejercicio 1.5. Indique los errores y modificaciones oportunas para un programa:

#include <iostream> // Faltaba una almohadilla al principio.
#include <cmath> // Faltaría esta directiva para calcular la operación log.
using namespace std; // Faltaba esta expresión.

int main(){

double valor, base;
// En los comentarios se muestran los errores detectados en el código original del libro.

	cout << "Indique base: " ; cin >> base;
// En el libro la dirección de << es incorrecta. Añadido un ; para finalizar la instrucción cin >> base;

	cout << "Indique valor: "; cin >> valor;

	cout << "El log en base " << base << " de " << valor << " es ";
// Añadido un espacio antes de finalizar el mensaje en pantalla para hacer más legible en texto, al igual que antes y después de "de" y "es".
// La variable Valor en mayúsculas no está declarada. El compilador diferencia mayúsculas y minúsculas. Faltaban comillas alrededor de es.

	cout << log (valor)/log(base) << endl;
// La sentencia log no está declarada en este espacio de nombres.
// Faltaba un ; para finalizar la sentencia endl;

// Puede dar errores en tiempo de ejecución con logaritmos negativos o log(base) igual a 0.
	
}
