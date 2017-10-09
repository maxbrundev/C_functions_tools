#include <stdio.h>
#include "string_safe_concatenate.h"
#include "string_length.h"

char* string_safe_concatenate(char* dest, char const* src, unsigned int size_max)
{
	unsigned int a = 0;
	unsigned int b = string_length(dest);

	if(dest == NULL)
		return NULL;

	if(src == NULL || size_max == 0)
		return dest;

	for( a = 0; a < size_max; a++, b++)
	{
    dest[b] = src[a];
		dest[size_max] = '\0';
	}
	return dest;
}
