
#include "test_libft.h"

static int	int_test(ssize_t i, char *b0, char *b1)
{
	int	rs0;
	int	rs1;

	(void)i;
	rs0 = ft_strcmp(b0, b1);
	rs1 = strcmp(b0, b1);
	if ((!rs0 && !rs1) || (rs1 > 0 && rs0 > 0) || (rs1 < 0 && rs0 < 0))
	{
		PRINT_OK;
		return (1);
	}
	PRINT_FAIL;
	return (0);
}

int		test_strcmp(void)
{
	char *name = "ft_strcmp";

	PRINT_NAME(name);
	clear_buff(g_buff0, g_buff1, BUFF_SIZE);
	strcat(g_buff0, "Hello world\n");
	TEST(int_test, name, 0, g_buff0, "Hello world\t");
	TEST(int_test, name, 0, g_buff0, "Hello world\n");
	TEST(int_test, name, 0, g_buff0, "Hello world\r");
	TEST(int_test, name, 0, g_buff0, "");
	TEST(int_test, name, 0, g_buff1, "sdfg");
	TEST(int_test, name, 0, g_buff1, "");
	return (0);
}
