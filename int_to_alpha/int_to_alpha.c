#include <stdlib.h>
#include "int_to_alpha.h"

char* int_to_alpha(int num)
{
	if (num == INT_MIN)
		return "-2147483648";

	unsigned short int numLength;
	unsigned short int stringLength = 1;
	char positive = 1;
	unsigned short int buffPos = 0;
	int tempNum = num;

	if (tempNum < 0)
	{
		num = -num;
		positive = 0;
		++stringLength;
	}

	tempNum = num;
	while (tempNum > 9)
	{
		tempNum /= 10;
		++stringLength;
	}

	numLength = stringLength - (1 - positive);

	char* result = (char*)malloc(sizeof(char)*stringLength);

	if (!positive)
		result[buffPos++] = '-';

	for (unsigned int i = 0; i < numLength; i++)
	{
		unsigned int count = 0;
		for (tempNum = num; tempNum >= 10; tempNum /= 10)
			++count;
		int toSubstract = tempNum;
		for (unsigned int u = 0; u < count; u++)
			toSubstract *= 10;
		num -= toSubstract;
		result[buffPos++] = tempNum + 48;
	}
	result[buffPos] = '\0';
	return result;
}
