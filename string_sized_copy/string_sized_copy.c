#include "string_sized_copy.h"

#include "string_length.h"

char* string_sized_copy(const char* p_source, char* p_dest, unsigned int p_sizeMax)
{
	const unsigned int sourceSize = string_length(p_source);

	for (unsigned int i = 0; i < p_sizeMax; i++)
	{
		if(i > sourceSize)
		{
			p_dest[i] = '\0';
		}
		else
		{
			p_dest[i] = p_source[i];
		}
	}

	if (sourceSize == p_sizeMax)
	{
		p_dest[p_sizeMax] = '\0';
	}

	return p_dest;
}
