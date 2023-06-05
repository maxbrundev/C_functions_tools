#include "string_token.h"

#include <stddef.h>

char* string_token(char* p_source, const char* p_delimiters)
{
	static char* stringBackup = NULL;

	if (p_source == NULL)
	{
		p_source = stringBackup;
	}

	if (p_source == NULL || *p_source == '\0')
	{
		return NULL;
	}

	char* token = p_source;

	while (*p_source != '\0')
	{
		const char* delimiter = p_delimiters;

		while (*delimiter != '\0')
		{
			if(*p_source == *delimiter)
			{
				break;
			}
			delimiter++;
		}

		if(*p_source == *delimiter)
		{
			while(*p_source == *delimiter && *p_source != '\0')
			{
				*p_source = '\0';
				stringBackup = p_source + 1;

				p_source++;

				if(*p_source != *delimiter)
				{
					delimiter++;
				}
			}

			return token;
		}

		p_source++;
	}

	stringBackup = p_source;

	return token;
}