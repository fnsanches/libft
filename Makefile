# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/04 15:16:05 by fsanches          #+#    #+#              #
#    Updated: 2022/04/08 20:16:39 by fsanches         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
LIB			= ar -rcs
RLIB		= ranlib
RM			= /bin/rm -f

INCS		= libft.h
SRCS		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
				ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
				ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
				ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
				ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
				ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
S_BONUS		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
				ft_lstdelone.c ft_lstclear.c ft_lstadd_back.c ft_lstiter.c \
				ft_lstmap.c

OBJS		= $(SRCS:.c=.o)
O_BONUS		= $(S_BONUS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(INCS)
				$(LIB) $(NAME) $(OBJS)
				$(RLIB) $(NAME)

bonus:		$(NAME) $(O_BONUS)
				$(LIB) $(NAME) $(O_BONUS)
				$(RLIB) $(NAME)

.c.o:
				$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
				$(RM) $(OBJS) $(O_BONUS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus