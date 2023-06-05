#pragma once

#ifndef STRING_SIZED_COPY
#define STRING_SIZED_COPY

#include <stddef.h>

char* string_sized_copy(char* p_destination, const char* p_source, size_t p_length);

#endif