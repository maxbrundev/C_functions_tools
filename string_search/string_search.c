#include "string_search.h"

#include <stddef.h>

#include "string_length.h"

char* string_search(const char* p_string, int p_searchedChar)
{
	while (*p_string != '\0')
	{
		if (*p_string == p_searchedChar)
		{
			return (char*)p_string;
		}

		p_string++;
	}

	return NULL;
}

char *string_reverse_search(const char *p_string, int p_searchedChar)
{
	size_t size = string_length(p_string);

	const char* stringEnd = p_string + size - 1;

	while (size - 1 > 0)
	{
		if (*stringEnd == p_searchedChar)
		{
			return (char*)stringEnd;
		}

		stringEnd--;
		size--;
	}

	return NULL;
}
