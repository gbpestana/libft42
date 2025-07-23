SRCS = ./libft00
SRCS_C = $(SRCS)/ft_atoi.c \
		$(SRCS)/ft_bzero.c \
		$(SRCS)/ft_calloc.c \
		$(SRCS)/ft_isalnum.c \
		$(SRCS)/ft_isalpha.c \
		$(SRCS)/ft_isascii.c \
		$(SRCS)/ft_isdigit.c \
		$(SRCS)/ft_isprint.c \
		$(SRCS)/ft_memchr.c \
		$(SRCS)/ft_memcmp.c \
		$(SRCS)/ft_memcpy.c \
		$(SRCS)/ft_memmove.c \
		$(SRCS)/ft_memset.c \
		$(SRCS)/ft_strchr.c \
		$(SRCS)/ft_strdup.c \
		$(SRCS)/ft_strlcat.c \
		$(SRCS)/ft_strlcpy.c \
		$(SRCS)/ft_strlen.c  \
		$(SRCS)/ft_strncmp.c \
		$(SRCS)/ft_strnstr.c \
		$(SRCS)/ft_strrchr.c \
		$(SRCS)/ft_tolower.c \
		$(SRCS)/ft_toupper.c
NAME = libft.a
FLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS_C:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(SRCS)/%.o: $(SRCS)/%.c
	gcc -c $(FLAGS) $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
