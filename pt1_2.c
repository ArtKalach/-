/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main ()
{
 int c = 5, d;
 float a = 5, b;
 printf("Введите число b: ");
 scanf("%f", &b);
 printf("Введите число d: ");
 scanf("%d", &d);
 
 a += b - 2;
 printf("a=%f, b=%f, c=%d, d=%d\n", a, b, c, d);
 d += ++c - a;
 printf("a=%f, b=%f, c=%d, d=%d\n", a, b, c, d);
 a *= c--;
 printf("a=%f, b=%f, c=%d, d=%d\n", a, b, c, d);
 d *= ((c /= 2) + --b + (a /= 10));
 printf("a=%f, b=%f, c=%d, d=%d\n", a, b, c, d);
 return 0;
}
