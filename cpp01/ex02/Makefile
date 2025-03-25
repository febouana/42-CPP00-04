
CPP = 			c++

CPPFLAGS = 		-Wall -Wextra -Werror -std=c++98

RM = 			rm -f

NAME =          HITHISISBRAIN

SRC =	main.cpp 

HITHISISBRAIN:	
				${CPP} ${SRC} ${CPPFLAGS} -o ${NAME}

all : 			$(NAME)                                                    

re : 		fclean HITHISISBRAIN	

clean:
			$(RM) HITHISISBRAIN

fclean: 	clean
				@$(RM) $(NAME)
