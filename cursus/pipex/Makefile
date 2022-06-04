NAME = pipex

LIBFT = include/libft/libft.a
LIBFT_PATH = include/libft/
SRCS_PATH = src/

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
RM = rm -f

SRCS_FILES = pipex.c utils.c check_args.c
SRCS = $(addprefix $(SRCS_PATH), $(SRCS_FILES))
OBJS = $(SRCS:.c=.o)

all: 	$(NAME)
	@echo "BOOM 💥💥💥💥💥 $(NAME) Compiled! 💯💯 $(DEFAULT)"

$(NAME): $(OBJS)
	@$(MAKE) -C $(LIBFT_PATH)
	@$(CC) $(CFLAGS) -o $@ $^ $(LIBFT)
	@echo -e "$(GREEN)$(NAME) created!$(DEFAULT)"

clean:
	@$(RM) 
	make -C $(LIBFT_PATH) clean
	@echo -e "$(YELLOW)object files deleted!$(DEFAULT)"

fclean:	clean
	@$(RM) $(NAME) $(LIBFT)
		

re:		fclean all

.PHONY:	all clean libft fclean re

git:
	@git add .
	@git commit -m "$(COMMIT)"
	@echo -e "$(GREEN)$(NAME) Committed!$(DEFAULT)"

#COLORS
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
DEFAULT = \033[0m
COMMIT = $(shell date "+%d %B %T")