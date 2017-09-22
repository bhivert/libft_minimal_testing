
#include "test_libft.h"

static int	int_test(ssize_t i, char *b, size_t n)
{
	int	rs0;
	int	rs1;

	(void)i;
	rs0 = ft_memcmp(g_buff0, b, n);
	rs1 = memcmp(g_buff0, b, n);
	if ((!rs0 && !rs1) || (rs1 > 0 && rs0 > 0) || (rs1 < 0 && rs0 < 0))
	{
		PRINT_OK;
		return (1);
	}
	PRINT_FAIL;
	return (0);
}

int		test_memcmp(void)
{
	char *name = "ft_memcmp";

	PRINT_NAME(name);
	clear_buff(g_buff0, g_buff1, BUFF_SIZE);
	strcat(g_buff0, "Hello world\n");
	TEST(int_test, name, 0, "Hello world\t", 11);
	TEST(int_test, name, 0, "Hello world\t", 12);
	TEST(int_test, name, 0, "Hello world\r", 12);
	TEST(int_test, name, 0, "Hello world\t", 0);
	return (0);
}
