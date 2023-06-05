#include "string_span.h"

#include <stddef.h>

#include "string_search.h"

size_t string_span(const char* p_string, const char* acceptedCharacters)
{
	return internal_string_span(p_string, acceptedCharacters, 0);
}

size_t string_counter_span(const char* p_string, const char* rejectedCharacters)
{
	return internal_string_span(p_string, rejectedCharacters, 1);
}

size_t internal_string_span(const char* p_string, const char* characters, int isReversed)
{
	size_t size = 0;

	while (*p_string != '\0')
	{
		if (isReversed == 0 ? string_search(characters, *p_string) != NULL : string_search(characters, *p_string) == NULL)
		{
			size++;
			p_string++;
		}
		else
		{
			return size;
		}
	}

	return size;
}