// Problema 1.1.Responder con verdadero o falso.

#include <iostream>
using namespace std;

int main(){

// Soluciones a las preguntas:

//01. Falso. Tanto datos como programas se almacenan en memoria principal
//02. Falso. La asignación de posiciones de memoria para datos no tiene por qué ser consecutiva. Un dato puede ocupar varias posiciones de memoria, por lo que la posición siguiente puede estar ocupada por el mismo dato.
//03. Falso. La asignación de espacio de memoria para las cadenas de caracteres no es el mismo que para números reales.
//04. Falso. No puede existir un lenguaje máquina universal ya que este será diferente según la arquitectura del procesador de la máquina.
//05. Falso. El compilador elimina todos los espacios entre tokens a la hora de leer el código y compilarlo.
//06. Verdadero. Sin la instrucción using no es capaz de determinar qué juego de instrucciones son las reconocidas en el lenguaje.
//07. Verdadero. Así funcionan las directivas.
//08. Falso. Una variable de tipo char sólo almacena un carácter; char* sí que almacena una cadena como "a".
//09. Falso. El identificador de una variable no puede comenzar por un número o contener caracteres con la ñ o vocales acentuadas.
//10. Verdadero.
//11. Verdadero. Comprobación más adelante.
//12. Verdadero. El teclado se considera la entrada estandar para capturar datos.
//13. Falso. cin distingue el tipo de dato introducido y la convierte al tipo de la variable en que la almacena.
//14. Falso. Introducir dos o más retornos de carro no genera ninguna entrada en la variable.
//15. Falso. De serlo se impartiría en el Zaidín-Vergeles xD!

// Comprobación de la afirmación del apartado 11:

int a, b, c, d, e, resultado_1, resultado_2;
a=1; b=2; c=3; d=4; e=5; resultado_1=0; resultado_2=0;

	resultado_1 = a+b/c*d+e;
	resultado_2 = (a+(b/(c+d))+(e));

	cout << "Comprobemos que los dos resultados son iguales: " << resultado_1 << " = " << resultado_2;

// Comprobación de la afirmación del apartado 14:

double real_1, real_2, resultado_real;
real_1=1.0; real_2=2.0; resultado_real=0.0;

	cout << "\n\nIntroduzca un primer número real: ";
	cin >> real_1;
	//cout << endl;

	cout << "Introduzca un segundo número real: ";
	cin >> real_2;
	cout << endl;

	resultado_real = real_1 + real_2;
	cout << "La suma de los dos números es: " << resultado_real << endl;

}
