#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to previously allocated memory
 * @old_size: size of allocated space for ptr
 * @new_size: size of newly allocated space
 *
 * Return: pointer to newly allocated memory, or NULL if failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
new_ptr = malloc(new_size);
return (new_ptr);
}
if (new_size <= old_size)
return (ptr);
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
memcpy(new_ptr, ptr, old_size);
free(ptr);
return (new_ptr);
}

