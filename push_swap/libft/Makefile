NAME=libft.a
CC=cc
CFLAGS=-Wall -Wextra -Werror
AR=ar rcs
RM=rm -f

SRC= ft_atoi.c ft_isprint.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c \
      ft_bzero.c ft_itoa.c ft_putendl_fd.c ft_strjoin.c ft_strrchr.c \
      ft_calloc.c ft_memchr.c ft_putnbr_fd.c ft_strlcat.c ft_strtrim.c \
      ft_isalnum.c ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c ft_substr.c \
      ft_isalpha.c ft_memcpy.c ft_split.c ft_strlen.c  ft_tolower.c \
      ft_isascii.c ft_memmove.c ft_strchr.c ft_strmapi.c ft_toupper.c \
      ft_isdigit.c ft_memset.c ft_strdup.c ft_strncmp.c ft_str_digit.c ft_atof.c \
	  ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthex.c ft_unsignbr.c ft_putptr.c \
	  get_next_line.c get_next_line_utils.c \

SRC_BONUS= ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c \
	  		ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ=$(SRC:.c=.o)
OBJ_BONUS=${SRC_BONUS:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJ_BONUS)
	$(AR) $(NAME) $(OBJ_BONUS)

.PHONY: all clean fclean re bonus
