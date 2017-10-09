#include <stdio.h>
#include "my_put_float.h"
#include "my_put_number.h"
#include "my_put_char.h"

void my_put_float(double num)
{
	int temp = num;
	int div = 1;

	if (temp < 0)
	{
		my_put_char('-');
		temp = -temp;
	}

	while (temp / div > 9 || temp / div < -9)
		div = div * 10;

	while (div >= 1)
	{
		if (temp > 0)
			my_put_number((temp / div) % 10);
		else
			my_put_number((temp / div) % 10);
		div = div / 10;
	}

	my_put_char('.');

	temp = num * 100;

	my_put_number((temp / 10) % 10);
	my_put_number((temp / 1) % 10);
}
