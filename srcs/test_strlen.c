

#include "test_libft.h"

static int	int_test(ssize_t i, char *s)
{
	int	rs0;
	int	rs1;

	(void)i;
	rs0 = ft_strlen(s);
	rs1 = strlen(s);
	if (rs0 == rs1)
	{
		PRINT_OK;
		return (1);
	}
	PRINT_FAIL;
	return (0);
}

int		test_strlen(void)
{
	char	*name = "ft_strlen";
	char	*s;

	PRINT_NAME(name);
	TEST(int_test, name, 0, "");
	TEST(int_test, name, 0, "Hello world");
	if ((s = (char *)malloc(sizeof(char) * 100000)))
	{
		memset(s, 0, 100000);
		memset(s, 1, 99999);
		TEST(int_test, name, 0, s);
	}
	return (0);
}
