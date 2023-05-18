#include <stdlib.h>
#include "main.h"

/** malloc checked: allocates memory
 * @b: number of bytes
 *
 * return: pointer to the allocated memory
 * status value is 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit (98);
	return (ptr);
}
