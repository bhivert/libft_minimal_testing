
#include "test_libft.h"

static int	int_test(ssize_t i, char *text)
{
	(void)text;
	i = 0;
	while (i < BUFF_SIZE)
	{
		g_buff0[i] = ft_toupper(g_buff0[i]);
		g_buff1[i] = toupper(g_buff1[i]);
		i++;
	}
	if (buffcmp(g_buff0, g_buff1, BUFF_SIZE))
		PRINT_OK;
	else
		PRINT_FAIL;
	return (1);
}

int		test_toupper(void)
{
	int	i = -1;
	int	j = -300;
	char *name = "ft_toupper";

	while (++i < BUFF_SIZE)
		g_buff0[i] = j++;
	i = -1;
	j = -300;
	while (++i < BUFF_SIZE)
		g_buff1[i] = j++;

	PRINT_NAME(name);
	TEST(int_test, name, 0, "-300 a 700");
	return (0);
}
