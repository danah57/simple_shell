#include "shell.h"

/**
 * _memset - populates memory with a specific byte value
 * @s: the pointer to the memory region
 * @b: the byte to be used for populating
 * @n: the amount of bytes to be filled
 * Return: a pointer (memory_ptr) to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - frees a string of strings
 * @pp: string of strings
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc -  adjusts the size of a memory block
 * @ptr: pointer to the previously allocated memory block
 * @old_size: byte size of previous block
 * @new_size: byte size of new block
 *
 * Return: a pointer to the resized memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}

