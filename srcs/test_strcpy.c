#include "test_libft.h"

static int	int_test(ssize_t i, void *src)
{
	void *rs;

	rs = ft_strcpy(g_buff0 + i, src);
	strcpy(g_buff1 + i, src);
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

int		test_strcpy(void)
{
	char *name = "ft_strcpy";

	PRINT_NAME(name);
	clear_buff(g_buff0, g_buff1, BUFF_SIZE);
	memset(g_buff0, 1, BUFF_SIZE / 2);
	memset(g_buff1, 1, BUFF_SIZE / 2);
	TEST(int_test, name, 0, "Hello");
	TEST(int_test, name, strlen(g_buff1), " ");
	TEST(int_test, name, strlen(g_buff1), "world");
	TEST(int_test, name, strlen(g_buff1), " !\n");
	TEST(int_test, name, strlen(g_buff1), "Hello world !");
	TEST(int_test, name, 5, "");
	TEST(int_test, name, 10, "j");
	return (0);
}
