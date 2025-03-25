
CPP = 			c++

CPPFLAGS = 		-Wall -Wextra -Werror -std=c++98

RM = 			rm -f

NAME =          unnecessaryViolence

SRC =	main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp

unnecessaryViolence:	
				${CPP} ${SRC} ${CPPFLAGS} -o ${NAME}

all : 			$(NAME)                                                    

re : 		fclean unnecessaryViolence	

clean:
			$(RM) unnecessaryViolence

fclean: 	clean
				@$(RM) $(NAME)
