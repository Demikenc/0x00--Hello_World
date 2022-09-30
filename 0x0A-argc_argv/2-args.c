#include <stdio.h>
/**
 * main - a program that prints all arguments it recieves.
 * @argc:argument count
 * @argv:array of pointers to argument strings
 * return: 0
 */

Int main(int  argc, char *argv[])
{
	While (argc--)
		Printf("%s\n", *argv++);
	return(0)
}
