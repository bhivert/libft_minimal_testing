
#include "test_libft.h"

static int	int_test(ssize_t i, void *src, size_t n)
{
	void *rs;

	rs = ft_memmove(g_buff0 + i, g_buff0 + (size_t)src, n);
	memmove(g_buff1 + i, g_buff1 + (size_t)src, n);
	if (rs == g_buff0 + i)
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

int		test_memmove(void)
{
	size_t	g_buff;
	char	*name = "ft_memmove";

	PRINT_NAME(name);
	clear_buff(g_buff0, g_buff1, BUFF_SIZE);
	strcat(g_buff0, "adnwrtjn'w rtng rjtnpwuw-485 yrngpwruthgw0q4;qjn");
	strcat(g_buff1, "adnwrtjn'w rtng rjtnpwuw-485 yrngpwruthgw0q4;qjn");
	g_buff = 0; TEST(int_test, name, 10, (void *)g_buff, 12);
	g_buff = 25; TEST(int_test, name, 12, (void *)g_buff, 4);
	g_buff = 13; TEST(int_test, name, 0, (void *)g_buff, 0);
	return (0);
}
