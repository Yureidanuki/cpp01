# ================== CONFIGURATION ================== #
NAME      := Sed
CC        := c++
CFLAGS    := -Wall -Wextra -Werror -std=c++98 -MMD

SRC_DIR   := .
OBJ_DIR   := obj
DEP_DIR   := $(OBJ_DIR)

SRC_FILES    := main.cpp

SRC   := $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS  := $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.cpp=.o))

# ================== COULEURS ================== #
GREEN  = \033[32m
BLUE   = \033[34m
RESET  = \033[0m
RED    = \033[31m

# ================== RÈGLES ================== #
all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(BLUE)Linking objects...$(RESET)"
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)✓ Compilation réussie, Ma Reine !$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS)
	@echo "$(RED)✓ Objets supprimés, Ma Reine.$(RESET)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)✓ Exécutable supprimé, Votre Majesté.$(RESET)"

re: fclean all

.PHONY: all clean fclean re
