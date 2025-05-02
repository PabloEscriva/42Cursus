NAME=pipex
CC=gcc
CFLAGS=-Wall -Wextra -Werror -g
AR=ar rcs
RM=rm -f

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

HEADER = src/pipex.h
INCLUDES = -I./src -I./libft -I.

SRC= pipex.c utils.c error.c
OBJ=$(SRC:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -L$(LIBFT_DIR) -lft -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I ./includes -I $(LIBFT_DIR) -c $< -o $@

clean:
	$(RM) $(OBJ)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	@make -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re