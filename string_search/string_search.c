#include "string_search.h"

#include <stddef.h>

char* string_search(char* p_string, char p_char)
{
	while (*p_string != '\0')
	{
		if (*p_string == p_char)
		{
			return p_string;
		}

		p_string++;
	}

	return NULL;
}
