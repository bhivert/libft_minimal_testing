
#include "test_libft.h"

static int	int_test(ssize_t i, void *src, size_t n)
{
	int	rs0;
	int	rs1;

	rs0 = ft_strlcat(g_buff0 + i, src, n);
	rs1 = strlcat(g_buff1 + i, src, n);
	if (rs0 == rs1)
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

int		test_strlcat(void)
{
	char *name = "ft_strlcat";

	PRINT_NAME(name);
	clear_buff(g_buff0, g_buff1, BUFF_SIZE);
	memset(g_buff0, 1, BUFF_SIZE / 2);
	memset(g_buff1, 1, BUFF_SIZE / 2);
	memset(g_buff0, 0, 1);
	memset(g_buff1, 0, 1);
	TEST(int_test, name, 0, "Hello", 10);
	TEST(int_test, name, 0, " ", 10);
	TEST(int_test, name, 0, "world", 10);
	TEST(int_test, name, 0, " !\n", 10);
	TEST(int_test, name, 0, "Hello world !", 20);
	TEST(int_test, name, 5, "", 10);
	TEST(int_test, name, 10, "", 0);
	return (0);
}
