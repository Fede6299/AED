# ¿Son esos realmente todos los tipos que vimos en clase?. Justifique.

>Un tipo de datos abstracto es una variable que puede cambiar según las condiciones dentro del programa. Este es un modelo de programación orientado a objetos que permite la reutilización de código mediante la creación de una capa de abstracción. Este tipo de datos se utiliza a menudo en los lenguajes de programación C ++ y Java® y se considera una técnica de desarrollo avanzada.. Por ejemplo, podriamos tener como elemento y operaciones:
- Ejemplos Comunes
1. String
2. Union
3. Interseccion
4. Números Complejos
5. Flujo
6.Pila - Cola
#### ¿Qué carácterística tienen?
* Un ejemplo que se utiliza a menudo para describir tipos de datos abstractos son los objetos de lista y cola. Estos son objetos que mantienen la información de forma lineal, similar a una hoja de cálculo de datos.

* No se puede utilizar un tipo de datos abstracto sin antes asignarlo a un tipo de datos concreto. Esta es una estructura de datos de esqueleto precursora que debe convertirse en un tipo de datos real cuando se crea. Luego, el esqueleto se utiliza accediendo a las funciones disponibles en la implementación concreta heredada. La clase abstracta define interfaces y funciones que pueden ser utilizadas por clases descendientes.

* Tener tipos abstractos dentro del software hace que el programa sea más flexible para futuras modificaciones.
---

# Investigacion sobre sizeof y limits:
- Sizeof:
> El **sizeof** es una palabra clave, que determina el tamaño, en bytes, de una variable o tipo de datos.
El operador sizeof se puede utilizar para obtener el tamaño de clases, estructuras, uniones y cualquier otro tipo de datos definido por el usuario.
La sintaxis de usar sizeof es la siguiente:

##### sizeof (data type)

`#include <iostream>
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
`

------------

#### Cuando se compila y ejecuta el código anterior, produce el siguiente resultado, que puede variar de una máquina a otra, en mi caso esto serian los tamaños arrojados mediante el uso sifeof:

>Size of char : 1
   
Size of int : 4
   
Size of short int : 2
   
Size of long int : 4
   
Size of float : 4
   
Size of double : 8
   
Size of wchar_t : 2
---

* Limits:
Límites numéricos (C++),existen dos tipos de limites los  **<limits.h> y <float.h>**,que definen los límites numéricos, o valores mínimos y máximos que puede contener una variable de un tipo determinado.

---
## Enlaces de referencia:
[Sizeof](https://www.tutorialspoint.com/cplusplus/cpp_sizeof_operator.htm)

[Limit](https://docs.microsoft.com/es-es/cpp/cpp/numerical-limits-cpp?view=msvc-170)

[TDA](https://spiegato.com/es/que-es-un-tipo-de-datos-abstracto#:~:text=Un%20tipo%20de%20datos%20abstracto%20es%20una%20variable,mediante%20la%20creaci%C3%B3n%20de%20una%20capa%20de%20abstracci%C3%B3n.)
