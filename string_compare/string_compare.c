#include "string_compare.h"

#include <stddef.h>

int string_compare(const char* str1, const char* str2)
{
	if (str1 == NULL && str2 == NULL)
		return 0;

	if (str1 == NULL)
		return -1;

	if (str2 == NULL)
		return 1;

	while (*str1 != '\0' || *str2 != '\0')
	{
		if (*str1 > *str2)
		{
			return 1;
		}

		if (*str1 < *str2)
		{
			return -1;
		}

		str1++;
		str2++;
	}

	return 0;
}
