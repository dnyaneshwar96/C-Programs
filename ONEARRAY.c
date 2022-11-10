/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//ONE DIMENSIONAL ARRAY ELEMENT.//
#include <stdio.h>

int main()
{
    int x[5]={20,40,60,80,100};
    int i;
    printf("x element\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",x[i]);
    }
    printf("\n");

    return 0;
}
