#include "search_algos.h"

/**
  * advanced_binary_recursive - searches recursively for an element in a sorted
  * array of integers using binary search
  * @array: address to the first element of the sub-array to search
  * @left: the beginning index of the sub array
  * @right: the ending index of the sub array
  * @value: the element to look for
  *
  * Return: -1 if the element is not found else its index
  *
  * Description: prints the element in the sub array after each change
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 *advanced_binary - looks for a value in a sorted array

 * @array: address to the first element in the array
 * @size: the array length
 * @value: the element to be searched in the array
 * Return: the index of the searched element if found
 */

int advanced_binary(int *array, size_t size, int value)
	{
		if (array == NULL || size == 0)
			return (-1);

		return (advanced_binary_recursive(array, 0, size - 1, value));
	}
