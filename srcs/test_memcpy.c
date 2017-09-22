
#include "test_libft.h"

static int	int_test(ssize_t i, void *src, size_t n)
{
	void *rs;

	rs = ft_memcpy(g_buff0 + i, src, n);
	memcpy(g_buff1 + i, src, n);
	if ((char *)rs - g_buff0 == i)
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

int		test_memcpy(void)
{
	char *name = "ft_memcpy";

	PRINT_NAME(name);
	clear_buff(g_buff0, g_buff1, BUFF_SIZE);
	TEST(int_test, name, strlen(g_buff1), "Hello", 6);
	TEST(int_test, name, strlen(g_buff1), " ", 1);
	TEST(int_test, name, strlen(g_buff1), "world", 5);
	TEST(int_test, name, strlen(g_buff1), " !\n", 3);
	TEST(int_test, name, strlen(g_buff1), "Hello world !", 14);
	TEST(int_test, name, 5, "", 1);
	TEST(int_test, name, 10, "j", 0);
	return (0);
}
