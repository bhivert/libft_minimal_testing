#include "test_libft.h"

char	g_buff0[BUFF_SIZE];
char	g_buff1[BUFF_SIZE];

void	clear_buff(void *b0, void *b1, size_t size)
{
	memset(b0, 0, size);
	memset(b1, 0, size);
}

int		buffcmp(void *b0, void *b1, size_t size)
{
	return ((!memcmp(b0, b1, size) ? 1 : 0));
}
