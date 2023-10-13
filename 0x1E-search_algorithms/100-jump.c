#include "search_algos.h"

/**
 * jump_search - Search for a value in a sorted array using jump search.
 * @array: A pointer to the first element of the sorted array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * This function performs a jump search to find the given value in the sorted
 * array. Jump search is an optimization over linear search for large datasets.
 *
 * Return: If the value is found, the function returns the first index of the
 * value in the array. If the value is not found, it returns -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump_step, prev_index;

	if (array == NULL || size == 0)
		return (-1);

	/* Calculate the jump step for the jump search */
	jump_step = sqrt(size);

	for (i = prev_index = 0; prev_index < size && array[prev_index] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", prev_index, array[prev_index]);
		i = prev_index;
		prev_index += jump_step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, prev_index);

	prev_index = prev_index < size - 1 ? prev_index : size - 1;

	for (; i < prev_index && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
