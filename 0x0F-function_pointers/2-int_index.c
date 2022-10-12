/**
*int_index - returns an integer index
*@array: array of some elements
*@size: size of the array
*@cmp: pointer for comparison
*Return: returns the index of the first integer
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index, res;

	res = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (res);
		}
		for (index = 0; index < size; index++)
		{
			cmp(array[index]);
			if (cmp(array[index] > 0)
			{
				res = index;
				break;
			}
			if ((cmp(array[index]) == (-1)))
			{
				return (res);
			}
		}
	}
	return (res);
}
