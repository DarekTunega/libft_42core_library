CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = libft.a

LIB_SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c\
		   ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c\
	  	   ft_memcmp.c ft_putnbr_fd.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	  	   ft_strmapi.c ft_itoa.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c
LIB_OBJS =  $(LIB_SRCS:.c=.o)

BONUS_SRCS = ft_lstnew.c ft_lstiter.c ft_lstsize.c ft_lstlast.c ft_lstadd_front.c ft_lstadd_back.c\
			 ft_lstdelone.c ft_lstclear.c ft_lstmap.c
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIB_OBJS)
	ar rc $(NAME) $(LIB_OBJS)

bonus: $(LIB_OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(LIB_OBJS) $(BONUS_OBJS)

clean:
	$(RM) $(LIB_OBJS) $(BONUS_OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
