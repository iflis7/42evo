NAME		= libftprintf.a

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
AR			= ar rcs

SRCS		= ft_printf.c ft_utils.c 
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

s3004-170790-03