CPP = 			c++

CPPFLAGS = 		-Wall -Wextra -Werror -std=c++98

RM = 			rm -f

NAME = 			ClapTrap

SRC =	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp

ClapTrap:	
				${CPP} ${SRC} ${CPPFLAGS} -o ${NAME}

all : 			$(NAME)                                                    

re : 		fclean ClapTrap	

clean:
			$(RM) ClapTrap

fclean: 	clean
				@$(RM) $(NAME)
