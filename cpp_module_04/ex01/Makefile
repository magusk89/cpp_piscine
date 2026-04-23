# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/30 20:53:45 by alebarbo          #+#    #+#              #
#    Updated: 2026/04/23 14:37:08 by alebarbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAMES
NAME			= brain

# PATHS
SOURCE_PATH		= source
INCLUDE_PATH	= include
BUILD_PATH		= .build

# SOURCE FILES
SOURCE			= $(addprefix $(SOURCE_PATH)/, \
				Animal.cpp \
				Brain.cpp \
				Cat.cpp \
				Dog.cpp \
				main.cpp \
)

# OBJECT FILES
OBJECT			= $(addprefix $(BUILD_PATH)/, $(notdir $(SOURCE:.cpp=.o)))

# MAKEFLAGS
CPPFLAGS		= c++ -Wall -Wextra -Werror -ggdb -std=c++98 -fsanitize=address
INCLUDE			= -I$(INCLUDE_PATH)

# UTILITY
RM				= rm -f
MKDIR_P			= mkdir -p
RMDIR			= $(RM) -r
MAKE			= make --no-print-directory

.PHONY: all re fclean clean

all: $(NAME)

$(NAME): $(OBJECT)
	@$(CPPFLAGS) $(INCLUDE) $(OBJECT) -o $@

$(BUILD_PATH)/%.o: $(SOURCE_PATH)/%.cpp | $(BUILD_PATH)
	@$(CPPFLAGS) $(INCLUDE) -c $< -o $@

$(BUILD_PATH):
	@$(MKDIR_P) $(BUILD_PATH)

clean:
	@$(RMDIR) $(BUILD_PATH)

fclean: clean
	@$(RM) $(NAME)

re: fclean all