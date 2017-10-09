#include <stdio.h>
#include <stdlib.h>
#include "string_duplicate.h"
#include "string_length.h"

char* string_duplicate(char const* str)
{
	int a;
	char* str_ptr = NULL;

	if(str == NULL)
		return NULL;

	str_ptr = malloc(string_length(str) * sizeof(char));

	if(str_ptr == NULL)
		return NULL;

	for (a = 0; str[a] != '\0'; a++)
	{
		str_ptr[a] = str[a];
	}
	str_ptr[a] = '\0';
	return str_ptr;
}
