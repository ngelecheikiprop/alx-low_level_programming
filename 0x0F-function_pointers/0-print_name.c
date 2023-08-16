/**
 *print_name - function that prints a name
 *@name: name to print
 *f:pointer to function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
