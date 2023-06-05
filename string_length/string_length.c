#include "string_length.h"

size_t string_length(const char* p_string)
{
	size_t length = 0;

	while (*p_string != '\0')
	{
		length++;

		p_string++;
	}

	return length;
}
