#ifndef TEST_LIBFT_H
# define TEST_LIBFT_H

# include <ctype.h>
# include <stdio.h>
# include <string.h>
# include "libft.h"

# define BUFF_SIZE	1000

extern char		g_buff0[BUFF_SIZE];
extern char		g_buff1[BUFF_SIZE];

# define TEST(ft, str, index, ...) (print(str, #__VA_ARGS__)), ft(index, __VA_ARGS__)
# define PRINT_NAME(str)	(print_name(str))
# define PRINT_OK			(print_ok())
# define PRINT_FAIL			(print_fail())

void	clear_buff(void *b0, void *b1, size_t size);
int		buffcmp(void *b0, void *b1, size_t size);

void	print(char *ft, char *va_args);
void	print_ok(void);
void	print_fail(void);
void	print_name(char *name);

int		test_memset(void);
int		test_bzero(void);
int		test_memcpy(void);
int		test_memccpy(void);
int		test_memmove(void);
int		test_memchr(void);
int		test_memcmp(void);
int		test_strlen(void);
int		test_strdup(void);
int		test_strcpy(void);
int		test_strncpy(void);
int		test_strcat(void);
int		test_strncat(void);
int		test_strlcat(void);
int		test_strchr(void);
int		test_strrchr(void);
int		test_strstr(void);
int		test_strnstr(void);
int		test_strcmp(void);
int		test_strncmp(void);
int		test_atoi(void);
int		test_isalpha(void);
int		test_isdigit(void);
int		test_isalnum(void);
int		test_isascii(void);
int		test_isprint(void);
int		test_toupper(void);
int		test_tolower(void);

#endif
