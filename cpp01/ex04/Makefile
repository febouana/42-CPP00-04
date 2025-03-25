
CPP = 			c++

CPPFLAGS = 		-Wall -Wextra -Werror -std=c++98

RM = 			rm -f

NAME =          sedIsForLosers

SRC =	main.cpp \
		sedIsForLosers.cpp

sedIsForLosers:	
				${CPP} ${SRC} ${CPPFLAGS} -o ${NAME}

all : 			$(NAME)                                                    

re : 		fclean sedIsForLosers	

clean:
			$(RM) sedIsForLosers

fclean: 	clean
				@$(RM) $(NAME)
