#include <stdio.h>
int main()
{
    int a = (int)1.999999;
    /*
    This is how type convertion is done on C language.
    There are two types of type convertions are done in  C language.
    1. Implicit convertion ; This is the type convertion where compiler automatically converts variable to higher bit variable when needed. like int -> float, float-> double etc.
    2. Explicit convertion : This type of convertions are to convert a higher bit variable to lower bit variable then compilers dosen't do it until devolper gives instructions. Syntax to show it is shown upper.
*/
    printf("%d", a);
    return 0;
}