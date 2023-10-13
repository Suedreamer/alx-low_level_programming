#include "search_algos.h"

/**
 * _binary_search - Searches for the value in a sorted subarray.
 * @array: An array of integers.
 * @left: The left boundary of the subarray.
 * @right: The right boundary of the subarray.
 * @value: The value to search for.
 *
 * This function performs a binary search within a given subarray of 'array'.
 *
 * Return: If the value is found, the function returns its index. If not found,
 * it returns -1.
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
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

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array.
 * @array: A pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * This function performs an exponential search to find the given value in the
 * sorted array. Exponential search is used to locate the range in which the
 * value is located, followed by a binary search within that range.
 *
 * Return: If the value is found, the function returns its index. If not found,
 * it returns -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t right;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i *= 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
