#include <stdio.h>
/**
 * main - prints all arguments it recieves
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: always 0
 */


int main(int argc, char *argv[])

{
int counter;
for (counter = 0; counter < argc; counter++)
printf("argv[%2d]:%s\n", counter, argv[counter]);
return (0);
}
