# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/27 17:28:45 by dbourdon          #+#    #+#              #
#    Updated: 2015/12/01 19:29:35 by dbourdon         ###   ########.fr        #
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
			ft_strmapi.c ft_strstr.c
OBJ_PATH = ./
NAME = libft.a
CFLAGS = -Werror -Wall -Wextra
OBJ_NAME = $(SRC_NAME:.c=.o)
SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))
LIB = $(addprefix -L,$(LIB_PATH))
INC = $(addprefix -I,$(INC_PATH))

all: $(NAME)

$(NAME): $(OBJ)
		gcc -Werror -Wall -Wextra -c *.c
		ar rc $(NAME) *.o
		ranlib $(NAME)
clean:
	    rm -fv *.o

fclean: clean
	    rm -fv $(NAME)

re: fclean all

norme:
	    norminette *
