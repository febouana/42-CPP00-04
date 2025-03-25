
CPP = 			c++

CPPFLAGS = 		-Wall -Wextra -Werror -std=c++98

RM = 			rm -f

NAME = 			BraiiiiiiinnnzzzZ

SRC =	main.cpp \
		newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp 

BraiiiiiiinnnzzzZ:	
				${CPP} ${SRC} ${CPPFLAGS} -o ${NAME}

all : 			$(NAME)                                                    

re : 		fclean BraiiiiiiinnnzzzZ	

clean:
			$(RM) BraiiiiiiinnnzzzZ

fclean: 	clean
				@$(RM) $(NAME)
