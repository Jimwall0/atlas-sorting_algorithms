#include "sort.h"
/**
 * bubble_sort - sorts an array
 * @array: the array to sort
 * @size: the limit of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned long int loop, subtract;
	int ptr;

	if (size < 2)
	{
		for (subtract = 0; subtract < size; subtract++)
		{
			for (loop = 0; loop < size - subtract; loop++)
			{
				ptr = array[loop - 1];
				if (ptr > array[loop])
				{
					array[loop - 1] = array[loop];
					array[loop] = ptr;
					print_array(array, size);
				}
			}
		}
	}
}
