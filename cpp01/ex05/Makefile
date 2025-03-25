
CPP = 			c++

CPPFLAGS = 		-Wall -Wextra -Werror -std=c++98

RM = 			rm -f

NAME =          Harl

SRC =	main.cpp \
		Harl.cpp

Harl:	
				${CPP} ${SRC} ${CPPFLAGS} -o ${NAME}

all : 			$(NAME)                                                    

re : 		fclean Harl	

clean:
			$(RM) Harl

fclean: 	clean
				@$(RM) $(NAME)
