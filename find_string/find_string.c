#include <stdio.h>
#include "find_string.h"

char const* find_string(char const* to_find, char const* str)
{
	int i = 0;
	int j = 0;

	if(str == NULL || to_find == NULL )
		return NULL;

	for(i = 0; str[i] != '\0'; i++)
	{
		for(j = 0; to_find[j] != '\0'; j++)
		{
			if(str[i + j] != to_find[j])
				break;
		}
		if(to_find[j] == '\0')
		return (str + i);
	}
	return NULL;
}
