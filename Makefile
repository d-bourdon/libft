# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/27 17:28:45 by dbourdon          #+#    #+#              #
#    Updated: 2016/01/10 16:21:03 by dbourdon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_NAME =  ft_itoa.c ft_memset.c ft_putstr_fd.c ft_strequ.c ft_strncat.c \
			ft_strsub.c ft_atoi.c ft_memalloc.c ft_putchar.c ft_strcat.c \
			ft_striter.c ft_strncmp.c ft_tolower.c ft_bzero.c ft_memccpy.c \
			ft_putchar_fd.c ft_strchr.c ft_striteri.c ft_strncpy.c \
			ft_toupper.c ft_isalnum.c ft_memchr.c ft_putendl.c ft_strclr.c \
			ft_strjoin.c ft_strnequ.c libft.h ft_isalpha.c ft_memcmp.c \
			ft_putendl_fd.c ft_strcmp.c ft_strlcat.c ft_strnew.c ft_isascii.c \
			ft_memcpy.c ft_putnbr.c ft_strcpy.c ft_strlen.c ft_strnstr.c \
			ft_isdigit.c ft_memdel.c ft_putnbr_fd.c ft_strdel.c ft_strmap.c \
			ft_strrchr.c ft_isprint.c ft_memmove.c ft_putstr.c ft_strdup.c \
			ft_strmapi.c ft_strstr.c ft_lstaddend.c ft_revers.c ft_count_nb.c \
			ft_initlongtab.c ft_lexincalc.c ft_strtrim.c ft_strsplit.c \
			ft_lstadd.c ft_lstdel.c ft_lstiter.c ft_lstmap.c ft_lstnew.c \
			ft_lstdelone.c
NAME = libft.a
CFLAGS = -Werror -Wall -Wextra

all: $(NAME)

$(NAME):
		gcc $(CFLAG) -c $(SRC_NAME)
		ar rc $(NAME) *.o
		ranlib $(NAME)
clean:
	    rm -fv *.o
		rm -f *.gch

fclean: clean
	    rm -fv $(NAME)

re: fclean all

norme:
	    norminette *
