

#include "test_libft.h"

static int	int_test(ssize_t i, char *s0, char *s1, size_t n)
{
	char	*rs0;
	char	*rs1;

	(void)i;
	rs0 = ft_strnstr(s0, s1, n);
	rs1 = strnstr(s0, s1, n);
	if (rs0 == rs1)
	{
		PRINT_OK;
		return (1);
	}
	PRINT_FAIL;
	return (0);
}

int		test_strnstr(void)
{
	char *name = "ft_strnstr";

	PRINT_NAME(name);
	clear_buff(g_buff0, g_buff1, BUFF_SIZE);
	strcat(g_buff0, "Hello world !\nHello world");
	TEST(int_test, name, 0, g_buff0, "world", 10);
	TEST(int_test, name, 0, g_buff0, "world", 11);
	TEST(int_test, name, 0, g_buff0, "world\0", 30);
	TEST(int_test, name, 0, g_buff0, "Hello", 10);
	TEST(int_test, name, 0, g_buff0, "dsfg", 30);
	TEST(int_test, name, 0, g_buff0, "", 30);
	TEST(int_test, name, 0, g_buff1, "dsfg", 30);
	TEST(int_test, name, 0, g_buff1, "", 30);
	return (0);
}
