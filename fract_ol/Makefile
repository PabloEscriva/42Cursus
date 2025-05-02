
#Compiler
NAME = fract_ol
CC = cc
CFLAGS = -Werror -Wall -Wextra -g
MAKE = make -sC

LIBMLX = MLX42-master/
LIBMLX_A = $(LIBMLX)build/libmlx42.a -ldl -lglfw -lm -pthread

LIBFT_DIR = libft/
LIBFT = $(LIBFT_DIR)libft.a

HEADER =	-I$(LIBMLX)include/glad \
			-I$(LIBMLX)include/KHR \
			-I$(LIBMLX)include/lodepng \
			-I$(LIBMLX)include/MLX42

SRC_DIR = src/
OBJ_DIR = objs/

SRC =	$(SRC_DIR)main.c \
		$(SRC_DIR)math_functions.c \
		$(SRC_DIR)julia.c \
		$(SRC_DIR)mandelbrot.c \
		$(SRC_DIR)colors.c \
		$(SRC_DIR)utils.c

OBJ = $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

all: libmlx $(LIBFT) $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(LIBFT):
	$(MAKE) $(LIBFT_DIR)

libmlx:
	@cmake $(LIBMLX) -B $(LIBMLX)build && make -C $(LIBMLX)build -j4

$(NAME): $(OBJ_DIR) $(OBJ)
	@$(CC) $(OBJ) $(HEADER) $(LIBMLX_A) $(LIBFT) -o $(NAME)
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
	@rm -r $(LIBMLX)build
	@$(MAKE) $(LIBFT_DIR) fclean
	@echo "Obj cleaning ok"

re: clean fclean all

.PHONY: re all clean fclean