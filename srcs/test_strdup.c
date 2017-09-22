

#include "test_libft.h"

static int	int_test(ssize_t i, char *s)
{
	char	*rs0;

	(void)i;
	rs0 = ft_strdup(s);
	if (rs0 != s && !strcmp(rs0, s))
	{
		free(rs0);
		PRINT_OK;
		return (1);
	}
	PRINT_FAIL;
	return (0);
}

int		test_strdup(void)
{
	char *name = "ft_strdup";

	PRINT_NAME(name);
	clear_buff(g_buff0, g_buff1, BUFF_SIZE);
	TEST(int_test, name, 0, "Hello world");
	TEST(int_test, name, 0, "");
	return (0);
}
