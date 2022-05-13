NAME		= client server

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
# HDRS 		= include

SRCS 		= client.c server.c utils.c 
				 
# BONUS_SRCS		=  

OBJS		= $(SRCS:.c=.o)
# BONUS_OBJS		= $(BONUS_SRCS:.c=.o)

# $(NAME):	$(OBJS)
# 			$(NAME) $(OBJS)

all:	$(NAME)

# server: server.o 
# 	$(CC) -o $@ $< 

# client: client.o 
# 	$(CC) -o $@ $<

# all:		client server

# server: server.o 
# 	$(CC) -o $@ $< 

# client: client.o 
# 	$(CC) -o $@ $< 

bonus:		$(OBJS) $(BONUS_OBJS)
			$(NAME) $(OBJ) $(BONUS_OBJS)

# %.o: %.c
# 			${CC} ${CFLAGS} -I ${HDRS} -c $< -o $@

clean:
			@$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re
