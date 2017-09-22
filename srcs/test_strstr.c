
#include "test_libft.h"

static int	int_test(ssize_t i, char *s0, char *s1)
{
	char	*rs0;
	char	*rs1;

	(void)i;
	rs0 = ft_strstr(s0, s1);
	rs1 = strstr(s0, s1);
	if (rs0 == rs1)
	{
		PRINT_OK;
		return (1);
	}
	PRINT_FAIL;
	return (0);
}

int		test_strstr(void)
{
	char *name = "ft_strstr";

	PRINT_NAME(name);
	clear_buff(g_buff0, g_buff1, BUFF_SIZE);
	strcat(g_buff0, "Hello world !\nHello world !");
	TEST(int_test, name, 0, g_buff0, "world");
	TEST(int_test, name, 0, g_buff0, "dsfg");
	TEST(int_test, name, 0, g_buff0, "");
	TEST(int_test, name, 0, g_buff1, "dsfg");
	TEST(int_test, name, 0, g_buff1, "");
	return (0);
}
