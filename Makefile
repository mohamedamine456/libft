# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/14 15:20:16 by mlachheb          #+#    #+#              #
#    Updated: 2019/10/22 11:03:20 by mlachheb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c\
	  ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c\
	  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
	  ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c\
	  ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c\
	  ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c\
	  ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
	  ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c\
	  ft_putendl_fd.c ft_putnbr_fd.c 

SRCBONUS = ft_lstnew_bonus.c\
		   ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
		   ft_lstlast_bonus.c ft_lstadd_back_bonus.c\
		   ft_lstdelone_bonus.c ft_lstclear_bonus.c\
		   ft_lstiter_bonus.c ft_lstmap_bonus.c

NAME = libft.a

OBJSRC = ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o\
		 ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlen.o\
		 ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o\
		 ft_isprint.o ft_toupper.o ft_tolower.o ft_strchr.o\
		 ft_strrchr.o ft_strncmp.o ft_strlcpy.o ft_strlcat.o\
		 ft_strnstr.o ft_atoi.o ft_calloc.o ft_strdup.o\
		 ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o\
		 ft_itoa.o ft_strmapi.o ft_putchar_fd.o ft_putstr_fd.o\
		 ft_putendl_fd.o ft_putnbr_fd.o 

OBJSRCBONUS = ft_lstnew_bonus.o\
			 ft_lstadd_front_bonus.o ft_lstsize_bonus.o\
			 ft_lstlast_bonus.o ft_lstadd_back_bonus.o\
			 ft_lstdelone_bonus.o ft_lstclear_bonus.o\
			 ft_lstiter_bonus.o ft_lstmap_bonus.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)
	ar rc $(NAME) $(OBJSRC)
	ranlib $(NAME)

bonus:
	gcc -Wall -Wextra -Werror -c $(SRC) $(SRCBONUS)
	ar rc $(NAME) $(OBJSRC) $(OBJSRCBONUS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJSRC) $(OBJSRCBONUS)

fclean:
	/bin/rm -f $(NAME)
re: fclean all
