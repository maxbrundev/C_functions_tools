#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#include "my_printf.h"

#include "string_copy.h"
#include "string_sized_copy.h"
#include "string_reverse.h"
#include "string_duplicate.h"
#include "string_find.h"
#include "string_search.h"
#include "string_compare.h"
#include "string_concatenate.h"

#include "int_to_alpha.h"

#include "my_put_string.h"

int main()
{
	// strcpy
	{
		const char* str = "Hello World \n";
		char str2[14];

		char* returnResult = string_copy(str, str2);

		my_printf("string source: %s", str);
		my_printf("string copy: %s", returnResult);
	}

	my_put_string("------------------ \n");

	// strncpy
	{
		const char* str = "Hello World \n";
		char strCopy[14];

		char* returnResult1 = string_sized_copy(str, strCopy, 14);

		my_printf("string source (size: %u): %s", 13, str);
		my_printf("string sized (%u) copy: %s", 13, returnResult1);
	}

	my_put_string("------------------ \n");

	// strrev
	{
		char str[] = "Hello";

		my_printf("string source: %s \n", str);

		char* returnResult = string_reverse(str);

		my_printf("string reverse: %s \n", returnResult);
	}

	my_put_string("------------------ \n");

	// strdup
	{
		const char* str = "Hello World \n";

		char* stringDuplicate = string_duplicate(str);

		my_printf("string source: %s", str);
		my_printf("new string duplicate: %s", stringDuplicate);

		free(stringDuplicate);
		stringDuplicate = NULL;
	}

	my_put_string("------------------ \n");

	// strstr
	{
		char* str = "Hello World \n";
		char* strToFind = "lo";

		char* stringFind = string_find(str, strToFind);

		my_printf("string source: %s", str);
		my_printf("string to find: %s \n", strToFind);
		my_printf("pointer on the first substring occurrence: %s", stringFind);
	}

	my_put_string("------------------ \n");

	// strchr
	{
		char* str = "Hello World \n";

		char charToFind = 'W';

		char* stringSearch= string_search(str, charToFind);

		my_printf("string source: %s", str);
		my_printf("char to find: %c \n", charToFind);
		my_printf("pointer on the first char occurrence: %s", stringSearch);
	}

	my_put_string("------------------ \n");

	// strcmp
	{
		const char* str  = "Hello World \n";
		const char* str2 = "Hello world \n";

		int result = string_compare(str, str2);

		my_printf("string source: %s", str);
		my_printf("second string source: %s", str2);
		my_printf("string compare result: %d \n", result);
	}

	my_put_string("------------------ \n");

	// strcat
	{
		const char* str = "Hello World \n";
		char str1[21] = "I say: ";

		my_printf("string source: %s", str);
		my_printf("string destination: %s \n", str1);

		char* strConcatenate = string_concatenate(str, str1);

		my_printf("string concatenate result: %s", strConcatenate);
	}

	my_put_string("------------------ \n");

	// int to alpha
	{
		int number = 350;
		int signedNumber = -350;

		char* stringNumber       = int_to_alpha(number);
		char* stringSignedNumber = int_to_alpha(signedNumber);

		my_printf("int: %d \n", number);
		my_printf("signed int: %d \n", signedNumber);

		my_printf("int to alpha string: %s \n", stringNumber);
		my_printf("signed int to alpha string: %s \n", stringSignedNumber);

 		free(stringNumber);
		stringNumber = NULL;

		free(stringSignedNumber);
		stringSignedNumber = NULL;
	}

	getchar();

	return 0;
}
