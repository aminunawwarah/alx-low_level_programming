/**
*print_name - displays a name
*@name: a pointer parameter
*@f: function pointer
*Return: return nothing
**/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
