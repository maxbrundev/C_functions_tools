#pragma once

#ifndef STRING_SPAN
#define STRING_SPAN

#include <stddef.h>

size_t string_span(const char* p_string, const char* acceptedCharacters);
size_t string_counter_span(const char* p_string, const char* rejectedCharacters);

size_t internal_string_span(const char* p_string, const char* characters, int isReversed);

#endif