#include <stdio.h>
#include "reverse_string.h"
#include "my_put_char.h"
#include "string_length.h"

void reverse_string(char const* str)
{
	int t = string_length(str)-1;

	if (str == NULL)
		return;

	while (t >=0)
	{
		my_put_char(str[t]);
		t--;
	}
}	
