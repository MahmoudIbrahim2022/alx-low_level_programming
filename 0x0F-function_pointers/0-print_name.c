
/**
 * print_name - prints a name.
 * @name: The name to print
 * @f: function that will print the name.
 *
 * Return: void.
 *
 */


void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	(*f)(name);

}
