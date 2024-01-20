NAME=hello
CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRC= add_node_to_list.c create_node.c create_string.c create_string.c hello.c free_list.c print_string_on_node.c
OBJ=$(SRC:.c=.o)

# ANSI escape codes for colors
GREEN=\033[0;32m
YELLOW=\033[0;33m
NC=\033[0m # No Color

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(GREEN)Objects created successfully$(NC)"
	@$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "$(YELLOW)Objects have been deleted$(NC)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(YELLOW)$(NAME) has been deleted$(NC)"

re: fclean all

run: all
	./$(NAME)

.PHONY: all clean fclean re run
