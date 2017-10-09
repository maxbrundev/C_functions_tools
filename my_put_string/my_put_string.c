#include <stdio.h>
#include "my_put_string.h"
#include "my_put_char.h"

void my_put_string(char const* str)
{
	int t = 0;

	if (str == NULL)
		return;

	while (str[t] != '\0')
	{
		my_put_char(str[t]);
		t = t + 1;
	}
}
