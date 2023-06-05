#include "string_concatenate.h"

#include "string_length.h"
#include "string_copy.h"

char* string_concatenate(char* p_destination, const char* p_source)
{
	string_copy(p_destination + string_length(p_destination), p_source);

	return p_destination;
}
