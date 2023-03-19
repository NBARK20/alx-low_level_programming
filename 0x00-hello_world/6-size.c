#include <stdio.h>
/**
* main - A program that print the size of various computer type
* Return 0 (success)
*/
int main (void)
{
char a;
int b; 
long int c;
long long int d;
float f;
printf("size of char: %lu bytes(s) \n", (usigned long)sizeof(a));
printf("size of int : %lu bytes(s) \n", (usigned long)sizeof(b));
printf("size of a long int : %lu bytes(s) \n", (usigned long)sizeof(s));
printf("size of a long long int : %lu bytes(s) \n", (usigned long)sizeof(d));
printf("size of a float: %lu bytes(s) \n", (usigned long)sizeof(f));
return(0);
}
