
#include "test_libft.h"

static int	int_test(ssize_t i, void *src, int c, size_t n)
{
	void *rs0;
	void *rs1;

	rs0 = ft_memccpy(g_buff0 + i, src, c, n);
	rs1 = memccpy(g_buff1 + i, src, c, n);
	if ((!rs0 && !rs1) || rs0 - src != rs1 - src)
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

int		test_memccpy(void)
{
	char *name = "ft_memccpy";

	PRINT_NAME(name);
	clear_buff(g_buff0, g_buff1, BUFF_SIZE);
	TEST(int_test, name, 0, "Hello world !\nHello world !", 'c', 3);
	TEST(int_test, name, strlen(g_buff1), "Hello world !\nHello world !", ' ', 10);
	TEST(int_test, name, strlen(g_buff1), "Hello world !\nHello world !", '\n', 10);
	TEST(int_test, name, strlen(g_buff1), "Hello world !\nHello world !", 'y', 30);
	TEST(int_test, name, strlen(g_buff1) / 2, "Hello world !\nHello world !", 'y', 0);
	TEST(int_test, name, 0, "Hello world !\nHello world !y", 'y', 28);
	return (0);
}
