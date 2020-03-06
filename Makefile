# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/01 10:04:16 by ftothmur          #+#    #+#              #
#    Updated: 2019/02/18 14:23:22 by ftothmur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#--------------------------MISC--------------------------#
.PHONY:		all clean fclean re
NAME =		libft.a
#----------------------DIRECTIRIES-----------------------#
LIB_DIR =	./
HDR_DIR =	./
SRC_DIR =	./
#----------------------SOURCE_FILES----------------------#
OBJ = 		$(SRC:.c=.o)
SRC =       $(PART_1) \
			$(PART_2) \
			$(BONUS) \
	 		$(EXPANSION)		
PART_1 =    ft_strcat.c \
			ft_strrchr.c \
			ft_strstr.c \
			ft_strncmp.c \
			ft_memcpy.c \
			ft_strcpy.c \
			ft_memcmp.c \
			ft_memccpy.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_strnstr.c \
			ft_bzero.c \
			ft_strncat.c \
			ft_strlen.c \
			ft_strncpy.c \
			ft_strchr.c \
			ft_isascii.c \
			ft_strcmp.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_strdup.c \
			ft_isalpha.c \
			ft_isprint.c \
			ft_tolower.c \
			ft_memchr.c \
			ft_atoi.c \
			ft_memmove.c \
			ft_memset.c
PART_2 =    ft_memalloc.c \
			ft_putchar_fd.c \
			ft_strmapi.c \
			ft_memdel.c \
			ft_putstr_fd.c \
			ft_strtrim.c \
			ft_putnbr_fd.c \
			ft_putendl_fd.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_strsub.c \
			ft_strequ.c \
			ft_strdel.c \
			ft_itoa.c \
			ft_strjoin.c \
			ft_strmap.c \
			ft_strnequ.c \
			ft_putchar.c \
			ft_putendl.c \
			ft_striteri.c \
			ft_striter.c \
			ft_strsplit.c \
			ft_strnew.c\
			ft_strclr.c
BONUS =		ft_lstdel.c    \
			ft_lstiter.c \
			ft_lstnew.c \
			ft_lstadd.c \
			ft_lstdelone.c \
			ft_lstmap.c 
EXPANSION =	ft_isspace.c \
			ft_isupper.c \
			ft_islower.c \
			ft_strnlen.c \
			ft_power.c \
			ft_itostr.c \
			ft_strchr_no.c \
			ft_strnchr.c
#--------------------COMPILER_OPTIONS--------------------#
CC_FLAGS =	-Wall \
			-Wextra \
			-Werror \
			-pedantic
LIB_FLAGS =	-L$(LIB_DIR) -lft 
#--------------------------RULES-------------------------#
all:		$(NAME)

$(NAME):	$(OBJ) 
			ar rc $(NAME) $(OBJ)
			ranlib $(NAME)

%.o : 		$(SRC_DIR)/%.c
			gcc -c $(CC_FLAGS) $< -I$(HDR_DIR)

clean:
			/bin/rm -f *.o

cleanm:	
			/usr/bin/find . \
				\( \
					-name "*~" -o \
					-name "#*#" -o \
					-name "a.out" -o \
					-name "*.swp" -o \
					-name "*.swo" \
				\) \
				-print -delete

fclean: 	clean cleanm
			/bin/rm -f $(NAME)

re:			fclean all
