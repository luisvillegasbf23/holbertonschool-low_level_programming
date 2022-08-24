#include "search_algo.h"
/**
 * linear_search - this unction that searches for a value in an
 * array of integers using the Linear search algorithm.
 * @array: array to be analyzed
 * @size: size of array
 * @value: value to search
 * return: the index locate or -1 if is no present
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array)
		return (-1);
	for (i = 0; array[i] && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

