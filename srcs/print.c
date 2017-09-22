
#include "test_libft.h"

void	print(char *ft, char *va_args)
{
	write(1, "\t", 1);
	write(1, ft, strlen(ft));
	write(1, "(", 1);
	write(1, va_args, strlen(va_args));
	write(1, "):\t", 3);
}

void	print_ok(void)
{
	write(1, "\033[32mOK\n\033[0m", 12);
}

void	print_fail(void)
{
	write(1, "\033[31mFAIL\n\033[0m", 14);
}

void	print_name(char *name)
{
	write(1, "\033[34m", 5);
	write(1, name, strlen(name));
	write(1, "\n\033[0m", 5);
}
