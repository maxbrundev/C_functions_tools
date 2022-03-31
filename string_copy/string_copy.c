#include "string_copy.h"

char* string_copy(const char* p_source, char* p_dest)
{
	unsigned int i;

	for(i = 0; p_source[i] != '\0'; i++)
	{
		p_dest[i] = p_source[i];
	}

	p_dest[i] = '\0';

	return p_dest;
}
