# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/30 20:53:45 by alebarbo          #+#    #+#              #
#    Updated: 2026/01/10 17:56:12 by alebarbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAMES
NAME			= sed

# PATHS
SOURCE_PATH		= .
BUILD_PATH		= .build

# SOURCE FILES
SOURCE			= $(addprefix $(SOURCE_PATH)/, \
				main.cpp \
)

# OBJECT FILES
OBJECT			= $(addprefix $(BUILD_PATH)/, $(notdir $(SOURCE:.cpp=.o)))

# MAKEFLAGS
CPPFLAGS		= c++ -Wall -Wextra -Werror -ggdb -std=c++98 -fsanitize=address

# UTILITY
RM				= rm -f
MKDIR_P			= mkdir -p
RMDIR			= $(RM) -r
MAKE			= make --no-print-directory

.PHONY: all re fclean clean

all: $(NAME)

$(NAME): $(OBJECT)
	@$(CPPFLAGS) $(OBJECT) -o $@

$(BUILD_PATH)/%.o: $(SOURCE_PATH)/%.cpp | $(BUILD_PATH)
	@$(CPPFLAGS) -c $< -o $@

$(BUILD_PATH):
	@$(MKDIR_P) $(BUILD_PATH)

clean:
	@$(RMDIR) $(BUILD_PATH)

fclean: clean
	@$(RM) $(NAME)

re: fclean all