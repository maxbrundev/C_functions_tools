#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#include "my_printf.h"

#include "string_length.h"
#include "string_copy.h"
#include "string_sized_copy.h"
#include "string_reverse.h"
#include "string_duplicate.h"
#include "string_find.h"
#include "string_search.h"
#include "string_compare.h"
#include "string_concatenate.h"
#include "string_span.h"

#include "int_to_alpha.h"

#include "my_put_string.h"

int main()
{
	// strcpy
	{
		char destination[14];
		const char* source = "Hello World";

		char* strCopy = string_copy(destination, source);

		my_printf("string source: %s \n", source);
		my_printf("string copy: %s \n", strCopy);
	}

	my_put_string("------------------ \n");

	// strncpy
	{
		char destination[14];
		const char* source = "Hello World";
		
		char* strSizedCopy = string_sized_copy(destination, source, 14);

		my_printf("string source (size: %u): %s \n",  string_length(source), source);
		my_printf("string sized (%u) copy: %s \n", string_length(strSizedCopy), strSizedCopy);
	}

	my_put_string("------------------ \n");

	// strrev
	{
		char str[] = "Hello";

		my_printf("string: %s \n", str);

		char* strReversed = string_reverse(str);

		my_printf("string reverse: %s \n", strReversed);
	}

	my_put_string("------------------ \n");

	// strdup
	{
		const char* str = "Hello World";

		char* stringDuplicate = string_duplicate(str);

		my_printf("string source: %s \n", str);
		my_printf("new string duplicate: %s \n", stringDuplicate);

		free(stringDuplicate);
		stringDuplicate = NULL;
	}

	my_put_string("------------------ \n");

	// strstr
	{
		char* str = "Hello World";
		char* strToFind = "lo";

		char* stringFind = string_find(str, strToFind);

		my_printf("string: %s \n", str);
		my_printf("string to find: %s \n", strToFind);
		my_printf("pointer on the first substring occurrence: %s \n", stringFind);
	}

	my_put_string("------------------ \n");

	// strchr
	{
		char* str = "Hello World";

		char charToFind = 'W';

		char* stringSearch= string_search(str, charToFind);

		my_printf("string: %s \n", str);
		my_printf("char to find: %c \n", charToFind);
		my_printf("pointer on the first char occurrence: %s \n", stringSearch);
	}

	my_put_string("------------------ \n");

	// strcmp
	{
		const char* str  = "Hello World";
		const char* str2 = "Hello world";

		int result = string_compare(str, str2);

		my_printf("string: %s \n", str);
		my_printf("second string: %s \n", str2);
		my_printf("string compare: %d \n", result);
	}

	my_put_string("------------------ \n");

	// strcat
	{
		char destination[21] = "I say: ";
		const char* source = "Hello World";
		
		my_printf("string destination: %s \n", destination);
		my_printf("string source: %s \n", source);

		char* strConcatenate = string_concatenate(destination, source);

		my_printf("string concatenate: %s \n", strConcatenate);
	}

	my_put_string("------------------ \n");

	// strspn
	{
		const char* str = "hello World";
		const char* characters = "abcdefghijklmnopqrstuvwxyz";

		my_printf("string: %s \n", str);
		my_printf("accepted characters: %s \n", characters);

		size_t size = string_span(str, characters);

		my_printf("string span: %i \n", size);
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
