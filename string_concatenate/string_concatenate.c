#include "string_concatenate.h"

#include "string_length.h"
#include "string_copy.h"

char* string_concatenate(const char* p_source, char* p_dest)
{
	string_copy(p_source, p_dest + string_length(p_dest));

	return p_dest;
}
