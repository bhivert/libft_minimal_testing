
#include "test_libft.h"

static int	int_test(ssize_t i, int c, size_t n)
{
	char	*rs0;
	char	*rs1;

	(void)i;
	rs0 = ft_memchr(g_buff0, c, n);
	rs1 = memchr(g_buff0, c, n);
	if (rs0 == rs1)
	{
		PRINT_OK;
		return (1);
	}
	PRINT_FAIL;
	return (0);
}

int		test_memchr(void)
{
	char *name = "ft_memchr";

	PRINT_NAME(name);
	clear_buff(g_buff0, g_buff1, BUFF_SIZE);
	strcat(g_buff0, "Hello world !\nHello world !");
	TEST(int_test, name, 0, '\n', 13);
	TEST(int_test, name, 0, '\n', 14);
	TEST(int_test, name, 0, 'y', BUFF_SIZE);
	return (0);
}
