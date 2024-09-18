NAME = phonebook

INC = PhoneBook.hpp

SRC = PhoneBook.cpp main.cpp

BUILD_DIR = .build
OBJ = $(SRC:%.cpp=$(BUILD_DIR)/%.o)
DEP = $(OBJ:%.o=%.d)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

RM = rm -rf
DIR_DUP = mkdir -p $(@D)

all: $(NAME)

$(BUILD_DIR)/%.o: %.cpp Makefile
	$(DIR_DUP)
	$(CC) $(CFLAGS) -I $(INC) -MMD -MP -c $< -o $@
	@echo "Created $@"

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Created $(NAME)"

-include $(DEP)

clean:
	$(RM) $(BUILD_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SILENT:
