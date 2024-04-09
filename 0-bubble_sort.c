#include "sort.h"
/**
 * bubble_sort - sorts a data structure
 * @array: list of data
 * @size: limit of the data
*/
void bubble_sort(int *array, size_t size)
{
	size_t hoop, temp;
	int loop = 0, limit = size;

	for (hoop = 0; hoop < size; hoop++)
	{
		for (loop = 0; loop < limit; loop++)
		{
			if (array[loop] > array[loop + 1] && (loop + 1) < limit)
			{
				temp = array[loop];
				array[loop] = array[loop + 1];
				array[loop + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
