
CPP = 			c++

CPPFLAGS = 		-Wall -Wextra -Werror -std=c++98

RM = 			rm -f

NAME = 			MoarBrainz

SRC =	main.cpp \
		Zombie.cpp \
		zombieHorde.cpp 

megaphone:	
				${CPP} ${SRC} ${CPPFLAGS} -o ${NAME}

all : 			$(NAME)                                                    

re : 		fclean MoarBrainz	

clean:
			$(RM) MoarBrainz

fclean: 	clean
				@$(RM) $(NAME)
