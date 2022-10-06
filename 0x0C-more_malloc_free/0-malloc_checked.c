#include "main.h"

#include <stdlib.h>



/**
 *  * malloc_checked - allocates memory using malloc
 *   * @b: memory to allocate
 *    * Return: pointer to allocated memory or normal process termination if e		rror
 */

void *malloc_checked(unsigned int b)

{

void *p;
	p = (int*) malloc(b * sizeof(int));
	if (p == NULL)
	exit(98);
return (p);
}
