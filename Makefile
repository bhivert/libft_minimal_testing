# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: bhivert <bhivert@student.42.fr>              +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2013/11/20 22:38:16 by bhivert             #+#    #+#             #
#   Updated: 2014/11/08 05:42:01 by noxxort            ###   ########.fr       #
#                                                                              #
# **************************************************************************** #
.PHONY:		all, clean, fclean, re, git \
			make_, make_clean, make_fclean, make_git, \
			create_dir
.SUFFIXES:

NAME		=	test_libft
CC			=	gcc
CFLAGS		=	-Wall -Wextra $(INCS_FLAGS) -O3

LIBS_DIR	=	../../libft
LIBS_NAME	=	ft
LIBS_A		=	$(LIBS_DIR)/lib$(LIBS_NAME).a
LIBS_FLAGS	=	-L$(LIBS_DIR) -l$(LIBS_NAME)

INCS_DIR	=	includes
INCS_FILES	=	libft.h \
				test_libft.h
INCS		=	$(foreach INC,$(INCS_FILES),$(INCS_DIR)/$(INC) )
INCS_FLAGS	=	-I$(INCS_DIR)

SRCS_DIR	=	srcs
SRCS_FILES	=	main.c \
				buff.c \
				print.c \
				test_memset.c \
				test_bzero.c \
				test_memcpy.c \
				test_memccpy.c \
				test_memmove.c \
				test_memchr.c \
				test_memcmp.c \
				test_strlen.c \
				test_strdup.c \
				test_strcpy.c \
				test_strncpy.c \
				test_strcat.c \
				test_strncat.c \
				test_strlcat.c \
				test_strchr.c \
				test_strrchr.c \
				test_strstr.c \
				test_strnstr.c \
				test_strcmp.c \
				test_strncmp.c \
				test_atoi.c \
				test_isalpha.c \
				test_isdigit.c \
				test_isalnum.c \
				test_isascii.c \
				test_isprint.c \
				test_toupper.c \
				test_tolower.c
SRCS		=	$(foreach SRC,$(SRCS_FILES),$(SRCS_DIR)/$(SRC) )

OBJS_DIR	=	objs
OBJS_FILES	=	$(SRCS_FILES:.c=.o)
OBJS		=	$(foreach OBJ,$(OBJS_FILES),$(OBJS_DIR)/$(OBJ) )

all				:	create_dir make_ $(NAME)

$(NAME)			:	$(OBJS)
	$(CC) $(CFLAGS) $^ -o $@ $(LIBS_FLAGS)

$(OBJS_DIR)/%.o	:	$(addprefix $(SRCS_DIR)/,%.c) $(LIBS_A) $(INCS)
	$(CC) $(CFLAGS) -c $< -o $@

clean			:	make_clean
	rm -f $(OBJS)

fclean			:	make_fclean clean
	rm -f $(NAME)

re				:	fclean all

create_dir		:
	@mkdir -p objs

make_			:
	make -C $(LIBS_DIR);

make_clean		:
	make -C $(LIBS_DIR) clean;

make_fclean		:
	make -C $(LIBS_DIR) fclean;
