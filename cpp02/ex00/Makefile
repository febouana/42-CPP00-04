CPP = 			c++

CPPFLAGS = 		-Wall -Wextra -Werror -std=c++98

RM = 			rm -f

NAME = 			fixed

SRC =	main.cpp \
		Fixed.class.cpp

fixed:	
				${CPP} ${SRC} ${CPPFLAGS} -o ${NAME}

all : 			$(NAME)                                                    

re : 		fclean fixed	

clean:
			$(RM) fixed

fclean: 	clean
				@$(RM) $(NAME)
