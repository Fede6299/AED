#include<cassert>
#include <cstring>
#include <string>

using namespace std::literals; //esto permite usar el sufijo s en el tipo de dato string

int main(int argc, char const *argv[])
{
    /*Assert con Bool:
       Operaciones utilizadas: == != or and not*/
       
   assert(true == true);
   assert(false != true);
   assert(false or true);
   assert(true and true);
   assert(not false and true);
   assert(false or true and not false);
   assert(true == true or false and true);
   assert(false != true and true);

   /*Feedback: que es lo que un tipo de dato sea bool es que diga true o false*/

    /*Assert con char:
       Operaciones utilizadas: == != <= >= + - * / - % */

   assert('F' == 'A' + 5);
   assert( 1 == 'B' - 'A');       
   assert('h' + '.' == '<' + 'Z');
   assert('A'!= 'a');    
   assert('U'- 5 <= 'w');
   assert(2 * '2' == '_' + 5);
   assert(170/2 == '?' + 17 + 5);
   assert('A' == 65);
   assert('11' != '10' - '1');   //warning: multi-character character constant [-Wmultichar]

   /*Feedback: la demostracion es en base a la tabla ascii teniendo en cuenta que estamos operando el valor del codigo de cada caracter,
   ademas es un subrango del unsigned*/

    /*Assert con unsigned:
       Operaciones utilizadas: == != <= >= + - * / - % */
    
   assert(101 + 77 <= 2000);    
   assert(100 % 2 == 0);    
   assert(1015 - 21 != 4);    
   assert(101 / 3 != 2);
   assert(22 - 1 >= 10 * 2);
   
   /*Feedback: para demostrar que uno esta usando el tipo de dato unsigned y no un int se debe acompañar el numero
     con una U ej: 10u. A continuacion utilizo variaciones de lo realizado anteriormente.*/

   assert(0u == 45u-10u * 4u - 5u);
   assert(500u % 2u == 0u);
   assert(38u - 1u >= 10u * 2u + 17u);
   assert(101u / 3u != 5u);

    /*Assert con int:
       Operaciones utilizadas: == != <= >= + - * / - % */

   assert(1 == 23 % 2);
   assert(0 == -4 + 4 + 0);
   assert(28>= 3 * 3 * 3);
   assert(-65<=16*-4);
   assert(14%7==0);
   assert(49/7==7);

   /*Feedback: los numeros simples serian los int osea sin tener una letra que acompañe al numero en cuestion*/

    /*Assert con double:
       Operaciones utilizadas: == != <= >= + - * / - */

   assert(0.0 - 1.0 == -1.0); //tiendo en cuenta el feedback de usingned lo que hace que 0.0 sea un dato double es el . (punto decimal) y no un 0 entero.
   assert(0.4 == 4.0 / (5.0*2.0));
   assert(1.0 != 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
   assert(0.0 == 0. and .0 == 0.0 and 0.0 == 0.0f and 0.0 == 0e1);  //f = float y 0e1 es la notacion cientifica.

    /*Feedback: no se debe preguntar por igualdad sobre tipos de datos double porque eso puede fallar.
      Siguientes assert realizados teniendo en cuenta la correcion. Teniendo en cuenta eso quitamos == de los
      operadores a utilzar en los tipos de dato double. Operadores a usar: != <= >= + - * / - */

   assert(19.47 >= 19.12 + 0.20);
   assert(21.44 >= 17*1.2);
   assert(46.21/3 != 15.40);

    /*Assert con string:
       Operaciones utilizadas: == != <= >= + length */    

   assert(8 == "Federico"s.length());    
   assert("Aa"s > "AA"s);
   assert("Apaza"s == "Apaza"s);
   assert("Apellido"s != "Federico"s);
   assert("Federico"s.length() >= "Facundo"s.length());
   assert("no"s < "si"s );
   
   /*Feedback: el sufijo s nos indica que es un string */
}
