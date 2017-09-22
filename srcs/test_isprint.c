
#include "test_libft.h"

static int	int_test(ssize_t i, char *text)
{
	int	rs0;
	int	rs1;

	(void)text;
	i = 0;
	while (i < BUFF_SIZE)
	{
		rs0 = ft_isprint(g_buff0[i]);
		rs1 = isprint(g_buff0[i]);
		if (!((!rs0 && !rs1) || (rs0 && rs1)))
		{
			PRINT_FAIL;
		}
		i++;
	}
	PRINT_OK;
	return (1);
}

int		test_isprint(void)
{
	int	i = -1;
	int	j = -300;
	char *name = "ft_isprint";

	while (++i < BUFF_SIZE)
		g_buff0[i] = j++;

	PRINT_NAME(name);
	TEST(int_test, name, 0, "-300 a 700");
	return (0);
}
