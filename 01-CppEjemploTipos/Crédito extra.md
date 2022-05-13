¿Son esos realmente todos los tipos que vimos en clase?
Justifique.

No solamente son los tipos de datos simples. Hay otros tipos de datos como:
Tipos de Datos Más Abstractos
 Ejemplos Comunes
 String
 Date: ¿es compuesto?
 Money o Currency
 Números Complejos
 Flujo
 ¿Qué carácterística comparten?
 No tienen representación directa en máquina
 Un int puede ser almacenado en un registro del 
microprocesador, un string no.
 No son estándar en los lenguajes de programación

# Investigacion sobre sizeof y limits: 
Sizeof: 
El sizeof es una palabra clave, pero es un operador de tiempo de compilación que determina el tamaño, en bytes, de una variable o tipo de datos.
El operador sizeof se puede utilizar para obtener el tamaño de clases, estructuras, uniones y cualquier otro tipo de datos definido por el usuario.
La sintaxis de usar sizeof es la siguiente −

sizeof (data type)

#include <iostream>
using namespace std;
 
int main() {
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
   
   return 0;
}
Cuando se compila y ejecuta el código anterior, produce el siguiente resultado, que puede variar de una máquina a otra:

Size of char : 1
Size of int : 4
Size of short int : 2
Size of long int : 4
Size of float : 4
Size of double : 8
Size of wchar_t : 2

