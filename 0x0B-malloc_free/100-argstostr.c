#include <stdlib.h>
#include "main.h"

/**
*argstostr - program function
*@ac: is a formal parameter
*@av: is another formal parameter
*Return: is the return type of the function
**/
char *argstostr(int ac, char **av)
{
	int index1, index2, k, size;
	char *args;

	size = 0;
	k = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	index1 = 0;
	while (index1 < ac)
	{
		index2 = 0;
		while (av[index1][index2])
		{
			size++;
			index2++;
		}
		size++;
		index1++;
	}
	args = malloc((sizeof(char) * size) + 1);
	if (args == NULL)
	{
		return (NULL);
	}
	index1 = 0;
	while (index1 < ac)
	{
		index2 = 0;
		while (av[index1][index2])
		{
			args[k] = av[index1][index2];
			index2++;
			k++;
		}
		args[k] = '\n';
		k++;
		index1++;
	}
	args[k] = '\0';
	return (args);
}
