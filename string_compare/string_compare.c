#include <stdio.h>
#include <stdlib.h>
#include "string_compare.h"

int string_compare(char const* str1, char const* str2)
{
	if (str1 == NULL && str2 == NULL)
		return 0;

	while (str1 != 0 && str2 != 0)
	{
		if(str1 > str2)
			return 1;
		else if(str1 < str2)
			return -1;
	}
	return 0;
}
