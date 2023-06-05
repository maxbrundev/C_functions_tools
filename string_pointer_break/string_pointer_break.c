#include "string_pointer_break.h"

#include <stddef.h>

char* string_pointer_break(char* string, char* searchedCharacters)
{
	while (*string != '\0')
	{
		char* characters = searchedCharacters;

		while (*characters != '\0')
		{
			if (*string == *characters)
			{
				return string;
			}

			characters++;
		}

		string++;
	}

	return NULL;
}