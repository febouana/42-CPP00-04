NAME        = Polymorphism

CPP         = c++
CPPFLAGS    = -Wall -Wextra -Werror -std=c++98

SRC 		=	src/main.cpp \
				src/Animal.class.cpp \
				src/Cat.class.cpp \
				src/Dog.class.cpp \
				src/WrongAnimal.class.cpp \
				src/WrongCat.class.cpp \
				src/Brain.class.cpp \

CYAN		= \033[36m
RESET		= \033[0m
UP			= \033[A #remonte le curseur d'une ligne dans le terminal
CUT			= \033[K #efface la ligne courante

all: $(NAME)
	@printf "\n\
	$(CYAN)  ██████╗██████╗ ██████╗  ██████╗ ██╗  ██╗       ██████╗  ██╗\n\
	$(CYAN) ██╔════╝██╔══██╗██╔══██╗██╔═████╗██║  ██║      ██╔═████╗███║\n\
	$(CYAN) ██║     ██████╔╝██████╔╝██║██╔██║███████║█████╗██║██╔██║╚██║\n\
	$(CYAN) ██║     ██╔═══╝ ██╔═══╝ ████╔╝██║╚════██║╚════╝████╔╝██║ ██║\n\
	$(CYAN) ╚██████╗██║     ██║     ╚██████╔╝     ██║      ╚██████╔╝ ██║\n\
	$(CYAN)  ╚═════╝╚═╝     ╚═╝      ╚═════╝      ╚═╝       ╚═════╝  ╚═╝$(RESET)\n"\

$(NAME):
	@printf "$(CYAN)Compiling [$(NAME)]$(RESET)"
	@sleep 0.2 && printf "$(CYAN).$(RESET)" && sleep 0.2 && printf "$(CYAN).$(RESET)" && sleep 0.2 && printf "$(CYAN).$(RESET)\n"
	@$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)
	@printf "$(UP)$(CUT)"
	@printf "$(CYAN)Finished [$(NAME)]$(RESET)\n"
	@printf "$(UP)$(CUT)"

clean:
	@$(RM) $(NAME)
	@printf "$(CYAN)Cleanup done.$(RESET)\n"

fclean: clean

re: fclean all

.PHONY: all clean fclean re

