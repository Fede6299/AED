/*  Tipos de Datos
    FHA
    20230427
 */

#include <iostream>
#include <cassert>

int main()
{
    // bool
    assert(not true == false);
    assert(not true != true);
    assert(true and false == false); // assert sirve para comprobar cosas
    assert(false or false == false);
    assert(false or true == true);

    // Entender como funcionan:
    // char
    assert('a' + 1 == 'b');
    assert('c' - 'a' == 2); // distancia entre a y c
    assert('@' + 1 == 'A');
    // unsigned
    // int
    // double
    // string
}
