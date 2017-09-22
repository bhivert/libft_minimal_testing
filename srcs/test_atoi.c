
#include "test_libft.h"

static int	int_test(ssize_t i, char *s)
{
	int	rs0;
	int	rs1;

	(void)i;
	rs0 = ft_atoi(s);
	rs1 = atoi(s);
	if (rs0 == rs1)
	{
		PRINT_OK;
		return (1);
	}
	PRINT_FAIL;
	printf("%d\t%d\n", rs0, rs1);
	return (0);
}

int		test_atoi(void)
{
	char	*name = "ft_atoi";

	PRINT_NAME(name);
	TEST(int_test, name, 0, "0");
	TEST(int_test, name, 0, "-0");
	TEST(int_test, name, 0, "+0");
	TEST(int_test, name, 0, " 0");
	TEST(int_test, name, 0, " -0");
	TEST(int_test, name, 0, " +0");
	TEST(int_test, name, 0, " \n\t\v\f\r-0");
	TEST(int_test, name, 0, " \n\t\v\f\r+0");
	TEST(int_test, name, 0, " \n\t\v\f\r10");
	TEST(int_test, name, 0, " \n\t\v\f\r-10");
	TEST(int_test, name, 0, "- \n\t\v\f\r10");
	TEST(int_test, name, 0, "+ \n\t\v\f\r10");
	TEST(int_test, name, 0, " \n\t\v\f\r");
	TEST(int_test, name, 0, "--1");
	TEST(int_test, name, 0, "++1");
	TEST(int_test, name, 0, "-+1");
	TEST(int_test, name, 0, "+-1");
	TEST(int_test, name, 0, "10");
	TEST(int_test, name, 0, "-10");
	TEST(int_test, name, 0, "a10");
	TEST(int_test, name, 0, "10a99");
	TEST(int_test, name, 0, "10 99");
	TEST(int_test, name, 0, "10-99");
	TEST(int_test, name, 0, "-2147483648");
	TEST(int_test, name, 0, "-");
	TEST(int_test, name, 0, "+");
	TEST(int_test, name, 0, "");
	TEST(int_test, name, 0, "-9999999999999");
	TEST(int_test, name, 0, "9999999999999");
	return (0);
}
