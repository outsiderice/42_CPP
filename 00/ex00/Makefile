NAME = megaphone

SRC = megaphone.cpp

BUILD_DIR = .build
OBJ = $(SRC:%.cpp=$(BUILD_DIR)/%.o)
DEP = $(OBJ:%.o=%.d)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf
DIR_DUP = mkdir -p $(@D)

all: $(NAME)

$(BUILD_DIR)/%.o: %.cpp
	$(DIR_DUP)
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@
	@echo "Created $@"

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Created $(NAME)"

-include $(DEP)

clean:
	$(RM) $(BUILD_DIR)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re
.SILENT:
