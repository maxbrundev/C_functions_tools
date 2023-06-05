#include "string_copy.h"

char* string_copy(char* p_destination, const char* p_source)
{
	unsigned int i = 0;

	char* result = p_destination;

	for(i = 0; p_source[i] != '\0'; i++)
	{
		p_destination[i] = p_source[i];
	}

	p_destination[i] = '\0';

	return result;
}
