#include<stdio.h>
#include "main.h"
#include <stdlib.h>


/**
*main - random password generator for 101-crackme
*Return: always 0
*/
int main(void)
{
	char str[10] = "122";
int x = atoi(str);
	printf("Converting '122': %d\n", x);

char str2[10] = "Hello!";
x = atoi(str2);
	printf("Converting 'Hello!': %d\n", x);

char str3[10] = "99Hello!";
x = atoi(str3);
	printf("Converting '99Hello!': %d\n", x);
return (0);
}
