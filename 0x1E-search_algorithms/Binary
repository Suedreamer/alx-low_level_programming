#include "search_algos.h"

/**
 * binary_search - Search for a value in a sorted array using binary search.
 * @array: A pointer to the first element of the sorted array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * This function performs a binary search to find the given value in the sorted
 * array.
 *
 * Return: If the value is found, the function returns the index of the value
 * in the array. If the value is not found, it returns -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	/* Check if the input array is NULL */
	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	/* Value not found in the array */
	return (-1);
}
