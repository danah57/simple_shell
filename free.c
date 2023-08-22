#include "MyShell.h"

/**
 * bfree - deallocates a pointer and sets the address to NULL
 * @ptr: memory address of the pointer to deallocate
 *
 * Return: 1 upon successful deallocation, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}

