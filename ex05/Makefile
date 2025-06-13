# ================== CONFIGURATION ================== #
NAME      := Harl
CC        := c++
CFLAGS    := -Wall -Wextra -Werror -std=c++98 -MMD
OPTIONS   := -I includes

SRC_DIR   := src
OBJ_DIR   := obj
DEP_DIR   := $(OBJ_DIR)

HEADER_FILES := includes/Harl.hpp
SRC_FILES    := main.cpp Harl.cpp

SRC   := $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS  := $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.cpp=.o))
DEPS  := $(addprefix $(DEP_DIR)/, $(SRC_FILES:.cpp=.d))

# ================== COULEURS ================== #
GREEN  = \033[32m
BLUE   = \033[34m
RESET  = \033[0m
RED    = \033[31m

# ================== RÈGLES ================== #
all: $(NAME)

$(NAME): $(OBJS) $(HEADER_FILES)
	@echo "$(BLUE)Linking objects...$(RESET)"
	@$(CC) $(CFLAGS) $(OPTIONS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)✓ Compilation réussie, Ma Reine !$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(OPTIONS) -c $< -o $@

clean:
	@rm -rf $(OBJS)
	@rm -rf $(DEPS)
	@echo "$(RED)✓ Objets et dépendances supprimés, Ma Reine.$(RESET)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)✓ Exécutable supprimé, Votre Majesté.$(RESET)"

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re