#include <stdio.h>
#include "string_safe_copy.h"
#include "string_length.h"

char* string_safe_copy(char* dest, char const* src, unsigned int size_max)
{
	unsigned int a = 0;

	if(dest == NULL)
		return NULL;

	if(src == NULL || size_max == 0)
		return dest;

	for( a = 0; a < size_max; a++)
	{
		dest[a] = src[a];
	}
	dest[size_max] = '\0';
	return dest;
}
