
# NAME = libft.a

# CC = gcc
# CFLAGS = -Wall -Wextra -Werror
# RM = rm -f

# SRCS = ft_memset.c \
# 		ft_bzero.c \
# 		ft_memcpy.c \
# 		ft_memmove.c \
# 		ft_memchr.c \
# 		ft_strlen.c \
# 		ft_strlcpy.c \
# 		ft_strlcat.c \
# 		ft_strchr.c \
# 		ft_strrchr.c \
# 		ft_strncmp.c \
# 		ft_isalpha.c \
# 		ft_isdigit.c \
# 		ft_isalnum.c \
# 		ft_isascii.c \
# 		ft_isprint.c \
# 		ft_toupper.c \
# 		ft_tolower.c \
# 		ft_calloc.c \
# 		ft_atoi.c \
# 		ft_strnstr.c \
# 		ft_memcmp.c \
# 		ft_memcpy.c \

# OBJS			= $(SRCS:.c=.o)

# HEAD		= ./includes/

# all: $(NAME) 

# $(NAME):		$(OBJS)
# 				ar rcs $(NAME) $(OBJS)
# clean:
# 	$(RM) $(OBJS)

# fclean: clean
# 	$(RM) $(NAME)

# re: fclean

# .PHONY : fclean all


SRC			= ft_memset ft_bzero ft_memcpy ft_memcpy ft_memmove ft_memchr ft_memcmp ft_strlen ft_isalpha ft_isdigit ft_isalnum\
 				ft_isascii ft_isprint ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_strlcpy ft_strlcat ft_strnstr ft_atoi\
				ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim
				 
			#  ft_split 
			# ft_itoa
			#  ft_strmapi ft_putchar_fd 
			# ft_putstr_fd ft_putendl_fd ft_putnbr_fd

# B_SRC		= ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

SRCS		= $(addsuffix .c, ${SRC})

B_SRCS		= $(addsuffix _bonus.c, ${B_SRC})

HEAD		= ./includes/ 

OBJS		= ${SRCS:.c=.o}

B_OBJS		= ${B_SRCS:.c=.o}

NAME		= libft.a

CC			= gcc
RM			= rm -f
AR			= ar rc
RN			= ranlib

CFLAGS		= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}
			${RN} ${NAME}

bonus:		${B_OBJS}
			${AR} ${NAME} ${B_OBJS}
			${RN} ${NAME}

all:		$(NAME)

clean:
			${RM} ${OBJS} ${B_OBJS}

fclean:		clean
			${RM} $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re
