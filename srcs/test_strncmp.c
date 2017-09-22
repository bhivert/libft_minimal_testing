
#include "test_libft.h"

static int	int_test(ssize_t i, char *b0, char *b1, size_t n)
{
	int	rs0;
	int	rs1;

	(void)i;
	rs0 = ft_strncmp(b0, b1, n);
	rs1 = strncmp(b0, b1, n);
	if ((!rs0 && !rs1) || (rs1 > 0 && rs0 > 0) || (rs1 < 0 && rs0 < 0))
	{
		PRINT_OK;
		return (1);
	}
	PRINT_FAIL;
	return (0);
}

int		test_strncmp(void)
{
	char *name = "ft_strncmp";

	PRINT_NAME(name);
	clear_buff(g_buff0, g_buff1, BUFF_SIZE);
	strcat(g_buff0, "Hello world\n");
	TEST(int_test, name, 0, g_buff0, "Hello world\t", 11);
	TEST(int_test, name, 0, g_buff0, "Hello world\t", 12);
	TEST(int_test, name, 0, g_buff0, "Hello world\r", 12);
	TEST(int_test, name, 0, g_buff0, "Hello world\n", 12);
	TEST(int_test, name, 0, g_buff0, "", 1);
	TEST(int_test, name, 0, g_buff0, "", 0);
	TEST(int_test, name, 0, g_buff1, "sdfg", 4);
	TEST(int_test, name, 0, g_buff1, "", 10);
	return (0);
}
