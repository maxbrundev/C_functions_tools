#include "string_sized_copy.h"

#include "string_length.h"

char* string_sized_copy(char* p_destination, const char* p_source, size_t p_length)
{
	const size_t sourceLength = string_length(p_source);

	for (size_t i = 0; i < p_length; i++)
	{
		if(i < sourceLength)
		{
			p_destination[i] = p_source[i];
		}
		else
		{
			p_destination[i] = '\0';
		}
	}

	if(sourceLength == p_length)
		p_destination[p_length] = '\0';
	
	return p_destination;
}
