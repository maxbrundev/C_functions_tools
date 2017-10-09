#include <stdio.h>
#include "string_length.h"

unsigned int string_length (char const* str)
{
	unsigned int num = 0;

	if(str == NULL)
		return num;

	while (str[num] != '\0')
	{
		num++;
	}
	return num;
}
