# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 10:14:01 by amagnell          #+#    #+#              #
#    Updated: 2024/09/17 11:36:40 by amagnell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#~~~~~~~~~~~~~~~TARGETS~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
NAME =		megaphone

#~~~~~~~~~~~~~~~FILES~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
SRC =		megaphone.cpp

#~~~~~~~~~~~~~~~OBJS & DEPS~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
BUILD_DIR =	.build
OBJ =		$(SRC:%.c=$(BUILD_DIR)/%.o)
DEP =		$(OBJ:%.o=%.d)

#~~~~~~~~~~~~~~~CC~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
CC =		c++
CFLAGS =	-std=c++98 -Wall -Wextra -Werror -MDD -fsanitize=address

#~~~~~~~~~~~~~~~COMMANDS~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
RM =		rm -rf
DIR_DUP =	mkdir -p $(@D)

#~~~~~~~~~~~~~~~RULES~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
all : $(NAME)

$(BUILD_DIR)/%.o:
	$(DIR_DUP)
	$(CC) $(CFLAGS) -c -o $@
	$(info Created $@)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -c -o $(NAME)

-include $(DEP)

clean :
	$(RM) $(BUILD_DIR)

fclean : clean
	$(RM) $(NAME)

re :
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re
.SILENT:
