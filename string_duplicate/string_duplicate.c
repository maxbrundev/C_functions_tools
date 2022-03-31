#include "string_duplicate.h"

#include <stdlib.h>

#include "string_length.h"

char* string_duplicate(const char* p_string)
{
	const unsigned int length = string_length(p_string);

	char* result = (char*)malloc(sizeof(char) * (length + 1));

	for (unsigned int i = 0; i < length; i++)
	{
		result[i] = p_string[i];
	}

	result[length] = '\0';

	return result;
}
