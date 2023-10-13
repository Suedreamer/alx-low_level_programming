#include "search_algos.h"

/**
 * interpolation_search - Search for a value in a sorted array using
 * interpolation search.
 * @array: A pointer to the first element of the sorted array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * This function performs an interpolation search to find the given value in
 * the sorted array. Interpolation search is an interpolation-based search
 * algorithm that works best for uniformly distributed data.
 *
 * Return: If the value is found, the function returns the first index where
 * the value is located in the array. If the value is not found, it returns -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));

		if (i < size)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);

			if (array[i] == value)
				return (i);
			if (array[i] > value)
				r = i - 1;
			else
				l = i + 1;
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}
	}

	return (-1);
}
