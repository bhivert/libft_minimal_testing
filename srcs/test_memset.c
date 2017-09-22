#include "test_libft.h"

static int	int_test(ssize_t i, int c, size_t n)
{
	char	*rs0;

	(void)i;
	rs0 = ft_memset(g_buff0, c, n);
	memset(g_buff1, c, n);
	if (rs0 == g_buff0)
	{
		if (buffcmp(g_buff0, g_buff1, BUFF_SIZE))
		{
			PRINT_OK;
			return (1);
		}
	}
	PRINT_FAIL;
	return (0);
}

int		test_memset(void)
{
	char *name = "ft_memset";

	PRINT_NAME(name);
	clear_buff(g_buff0, g_buff1, BUFF_SIZE);
	TEST(int_test, name, 0, 'f', BUFF_SIZE / 2);
	TEST(int_test, name, 0, 'b', (BUFF_SIZE / 2) - 1);
	TEST(int_test, name, 0, 'x', 0);
	return (0);
}
