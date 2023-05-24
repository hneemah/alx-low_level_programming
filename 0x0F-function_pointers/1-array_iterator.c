#include "function_pointers.h"
/**
 *array_iterator - execute a function given as a parameter.
 *@array: pointer to array of int type.
 *@size: size of array.
 *@action: pointer a function.
 *Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t z;

	if (array != NULL && action != NULL)
	{
		for (z = 0; z < size; z++)

		{
			action(array[z]);
		}
	}
}
