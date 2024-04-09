#include "sort.h"
/**
 * bubble_sort - sorts a data structure
 * 
*/
void bubble_sort(int *array, size_t size)
{
	size_t hoop, loop, temp;

	for (hoop = 0; hoop < size; hoop++)
	{
		for (loop = 0; loop < size; loop++)
		{
			if (array[loop] <= array[loop + 1])
			{
				temp = array[loop];
				array[loop] = array[loop + 1];
				array[loop + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
