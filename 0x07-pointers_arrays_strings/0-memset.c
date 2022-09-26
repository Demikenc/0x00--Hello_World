/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)

{
int i = 0;
while (n > 0)
{
s[i] = b;
i++;
n--;
}
return (s);
}
