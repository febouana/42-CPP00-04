# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: febouana <febouana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/01 21:55:02 by febouana          #+#    #+#              #
#    Updated: 2025/06/01 21:55:04 by febouana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = Fixed
CPP         = c++
CPPFLAGS    = -Wall -Wextra -Werror -std=c++98
DIR_DUP     = mkdir -p $(@D)
RM          = rm -f
		
SRC_DIR     := src
OBJ_DIR     := obj

SRCS        = src/main.cpp \
				src/Fixed.class.cpp 

OBJS := $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

CYAN		= \033[36m
RESET		= \033[0m
UP			= \033[A #remonte le curseur d'une ligne dans le terminal
CUT			= \033[K #efface la ligne courante

$(NAME): $(OBJS)
	@$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME) 
	@printf "$(CYAN)Compiling [$(NAME)]$(RESET)"
	@sleep 0.2 && printf "$(CYAN).$(RESET)" && sleep 0.2 && printf "$(CYAN).$(RESET)" && sleep 0.2 && printf "$(CYAN).$(RESET)\n"
	@printf "$(UP)$(CUT)"
	@printf "$(CYAN)Finished [$(NAME)]$(RESET)\n"
	@printf "$(UP)$(CUT)"
	@printf "\n\
	$(CYAN)  ██████╗██████╗ ██████╗  ██████╗ ██████╗        ██████╗  ██╗\n\
	$(CYAN) ██╔════╝██╔══██╗██╔══██╗██╔═████╗╚════██╗      ██╔═████╗███║\n\
	$(CYAN) ██║     ██████╔╝██████╔╝██║██╔██║ █████╔╝█████╗██║██╔██║╚██║\n\
	$(CYAN) ██║     ██╔═══╝ ██╔═══╝ ████╔╝██║██╔═══╝ ╚════╝████╔╝██║ ██║\n\
	$(CYAN) ╚██████╗██║     ██║     ╚██████╔╝███████╗      ╚██████╔╝ ██║\n\
	$(CYAN)  ╚═════╝╚═╝     ╚═╝      ╚═════╝ ╚══════╝       ╚═════╝  ╚═╝  $(RESET)\n"\

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@$(DIR_DUP)
	@$(CPP) $(CPPFLAGS) -c -o $@ $<

all: $(NAME)

clean:
	@$(RM) $(OBJS)
	@printf "$(CYAN)Cleanup done.$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
