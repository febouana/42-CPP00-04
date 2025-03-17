
CPP = 			c++

CPPFLAGS = 		-Wall -Wextra -Werror -std=c++98

RM = 			rm -f

NAME = 			megaphone

SRC =	megaphone.cpp

megaphone:	
				${CPP} ${SRC} ${CPPFLAGS} -o ${NAME}

all : 			$(NAME)                                                    

re : 		fclean megaphone	

clean:
			$(RM) megaphone

fclean: 	clean
				@$(RM) $(NAME)
