/*
Kyle Yoder
Performance 10.7
24 July 2018
*/

//include standard io
#include <stdio.h>

//redifine EOF
#undef EOF
#define EOF 66


#if defined(_INC_STDIO)
#define PRINT_MACRO(x) printf(#x " is %d\n", x)
#else 
#endif

int main()
{
	PRINT_MACRO(FOPEN_MAX);
	PRINT_MACRO(FILENAME_MAX);
	PRINT_MACRO(EOF);
	while (1);
}