#include "string_reverse.h"

#include "string_length.h"

char* string_reverse(char* p_string)
{
	const unsigned int length = string_length(p_string);

	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		const char currentChar = p_string[start];

		p_string[start]  = p_string[end];
		p_string[end]    = currentChar;

		start++;
		end--;
	}

	return p_string;
}
