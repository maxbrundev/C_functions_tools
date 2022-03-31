#include "int_to_alpha.h"

#include <stdlib.h>

char* int_to_alpha(int p_number)
{
	char* result = NULL;

	unsigned int stringLength = 0;
	unsigned int devider      = 1;
	unsigned int bufferIndex  = 0;
	unsigned int isNegative   = 0;

	if(p_number < 0)
	{
		p_number = -p_number;
		stringLength++;

		isNegative = 1;
	}

	while(p_number / devider > 9)
	{
		devider *= 10;
		stringLength++;
	}
	stringLength++;

	result = (char*)malloc(sizeof(char) * (stringLength + 1));

	if(isNegative)
	{
		result[bufferIndex++] = '-';
	}

	while(bufferIndex < stringLength)
	{
		result[bufferIndex++] = '0' + (p_number / devider) % 10;
		devider /= 10;
	}

	result[stringLength] = '\0';

	return result;
}
