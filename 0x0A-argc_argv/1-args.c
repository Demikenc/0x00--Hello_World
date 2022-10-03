#include <stdio.h>
/**
 * main - prints all arguments it recieves
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: always 0
 */


int main(int argc, char *argv[])
{
int counter = argc - 1;
*argv = *argv;

printf("%d\n", counter);
return (0);
}
