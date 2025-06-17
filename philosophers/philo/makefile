#Compiler
NAME = philosophers
CC = cc
CFLAGS = -Werror -Wall -Wextra
MAKE = make -sC

LIBFT_DIR = ./libft/
LIBFT = $(LIBFT_DIR)libft.a

SRC_DIR = src/
OBJ_DIR = objs/

SRC =	$(SRC_DIR)philo.c \
		$(SRC_DIR)str_utils.c \

OBJ = $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

all: $(LIBFT) $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(LIBFT):
	$(MAKE) $(LIBFT_DIR)

$(NAME): $(OBJ_DIR) $(OBJ)
	@$(CC) $(OBJ) $(HEADER) $(LIBFT) -o $(NAME)
	@echo "program ready"

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
	@$(CC) $(CFLAGS) $(HEADER) -c $< -o $@
	@echo "ok"

clean:
	@rm -f $(OBJ)
	@$(MAKE) $(LIBFT_DIR) clean
	@echo "Obj cleaning ok"

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) $(LIBFT_DIR) fclean
	@echo "Obj cleaning ok"

re: clean fclean all

.PHONY: re all clean fclean