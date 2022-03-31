#include "string_find.h"

#include <stddef.h>

char* string_find(char* p_string, char* p_substring)
{
	unsigned int j = 0;

	for(unsigned int i = 0; p_string[i] != '\0'; i++)
	{
		if(p_string[i] == p_substring[0])
		{
			for (j = 0; p_substring[j] != '\0'; j++)
			{
				if (p_string[i + j] != p_substring[j])
					break;
			}

			if (p_substring[j] == '\0')
			{
				return p_string + i;
			}
		}
	}

	return NULL;
}
