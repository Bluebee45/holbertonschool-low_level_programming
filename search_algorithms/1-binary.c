#include "search_algos.h"

/**
 * print_search - prints an array of integers
 * @array: array to print
 * @low: lowest index of the array
 * @high: highest index of the array
 *
 * return: void
 */

void print_search(int *array, size_t low, size_t high)
{
	size_t i = 0;

	printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i < high)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
}

/**
 * binary_search - searches in a sorted array of integers using Binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid = 0;

	if (array == NULL || size <= 0)
		return (-1);

	while (low <= high)
	{
		print_search(array, low, high);

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
