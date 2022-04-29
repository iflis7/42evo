NAME		= libftprintf.a
NAMELFT		= libft.a

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
AR			= ar rcs

DIRLIB		= ./libft/

SRCS		= ft_printf.c \
OBJS		= $(SRCS:.c=.o)


$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re
