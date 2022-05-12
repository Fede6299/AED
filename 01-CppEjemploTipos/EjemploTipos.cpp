#include<cassert>
#include <cstring>
#include <string>
using namespace std::literals;
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
    assert((false and true) == false);
    assert(false != true and true);

    /*Assert con char:
       Operaciones utilizadas: == != <= >= + - * / - % */

    assert('A'=='A');
    assert('F'>='B');        
    assert('h'+ '.'=='<' + 'Z');
    assert('n'!= 4);    
    assert('U'- 5 <= 'w');
    assert(2*'2'== '_' + 5);
    assert(170/2=='?'+17+5);

    /*Assert con unsigned:
       Operaciones utilizadas: == != <= >= + - * / - % */
    
    assert(101+77<=2000);    
    assert(100%2==0);    
    assert(1015-21!=4);    
    assert(101/3!=2);

    /*Assert con int:
       Operaciones utilizadas: == != <= >= + - * / - % */

    assert(1 == 23 % 2);
    assert(0 == -4 + 4 + 0);
    assert(27== 3 * 3 * 3);

    /*Assert con double:
       Operaciones utilizadas: == != <= >= + - * / - */

    assert(0.0 - 1.0 == -1.0);
    assert(0.4 == 4.0 / (5.0*2.0));
    assert(1.0 != 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

    /*Assert con string:
       Operaciones utilizadas: == != <= >= + length */    

    assert(8 == "Federico"s.length());    
    assert("Aa"s >= "AA"s);
    assert("Apaza"s == "Apaza"s);
    assert("Apellido"s != "Federico"s);
}
