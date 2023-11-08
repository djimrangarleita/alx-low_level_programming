/**
 * print_name - print a name
 * @name: string pointer to the name to be printed
 * @f: function pointer, the function that will print name
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
