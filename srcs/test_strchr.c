
#include "test_libft.h"

static int	int_test(ssize_t i, int c)
{
	char	*rs0;
	char	*rs1;

	(void)i;
	rs0 = ft_strchr(g_buff0, c);
	rs1 = strchr(g_buff0, c);
	if (rs0 == rs1)
	{
		PRINT_OK;
		return (1);
	}
	PRINT_FAIL;
	return (0);
}

int		test_strchr(void)
{
	char *name = "ft_strchr";

	PRINT_NAME(name);
	clear_buff(g_buff0, g_buff1, BUFF_SIZE);
	strcat(g_buff0, "Hello world !\nHello world !");
	TEST(int_test, name, 0, '\n');
	TEST(int_test, name, 0, 'o');
	TEST(int_test, name, 0, 'y');
	TEST(int_test, name, 0, '\0');
	return (0);
}
