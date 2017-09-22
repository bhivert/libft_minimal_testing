#include "test_libft.h"

static int	int_test(ssize_t i, size_t n)
{
	(void)i;
	ft_bzero(g_buff0, n);
	bzero(g_buff1, n);
	if (buffcmp(g_buff0, g_buff1, BUFF_SIZE))
	{
		PRINT_OK;
		return (1);
	}
	PRINT_FAIL;
	return (0);
}

int		test_bzero(void)
{
	char *name = "ft_bzero";

	PRINT_NAME(name);
	memset(g_buff0, 1, BUFF_SIZE);
	memset(g_buff1, 1, BUFF_SIZE);
	TEST(int_test, name, 0, 0);
	TEST(int_test, name, 0, BUFF_SIZE / 3);
	TEST(int_test, name, 0, BUFF_SIZE / 2);
	TEST(int_test, name, 0, BUFF_SIZE);
	return (0);
}
