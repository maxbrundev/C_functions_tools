#include <stdio.h>
#include "my_put_unsigned.h"
#include "my_put_char.h"

void my_put_unsigned(unsigned int num)
{
	int div = 1;

	while (num / div > 9)
		div = div * 10;

	while (div >= 1)
	{
		if (num > 0)
			my_put_char('0' + (num / div) % 10);
		div = div / 10;
	}
}
