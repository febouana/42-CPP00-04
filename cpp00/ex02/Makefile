
CPP = 			c++

CPPFLAGS = 		-Wall -Wextra -Werror -std=c++98

RM = 			rm -f

NAME = 			DreamJob

SRC =	tests.cpp \
		Account.cpp 


megaphone:	
				${CPP} ${SRC} ${CPPFLAGS} -o ${NAME}

all : 			$(NAME)                                                    

re : 		fclean DreamJob	

clean:
			$(RM) DreamJob

fclean: 	clean
				@$(RM) $(NAME)
