NAME		= libft.a

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
AR			= ar rcs

SRC			= ft_memset ft_bzero ft_memcpy ft_memcpy ft_memmove ft_memchr ft_memcmp ft_strlen ft_isalpha ft_isdigit ft_isalnum\
 				ft_isascii ft_isprint ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_strlcpy ft_strlcat ft_strnstr ft_atoi\
				ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim ft_itoa ft_split ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd \
				ft_strmapi ft_striteri \
				 
BONUS_SRC		= ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter ft_lstmap\

SRCS		= $(addsuffix .c, ${SRC})
BONUS_SRCS		= $(addsuffix .c, ${BONUS_SRC})

# HEAD		= ./includes/ 

OBJS		= ${SRCS:.c=.o}

BONUS_OBJS		= ${BONUS_SRCS:.c=.o}

# .c.o:
# 			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}

bonus:		${OBJS} ${BONUS_OBJS}
			${AR} ${NAME} ${BONUS_OBJS}

all:		$(NAME)

clean:
			${RM} ${OBJS} ${BONUS_OBJS}

fclean:		clean
			${RM} $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re
