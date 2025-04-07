CPP = 			c++

CPPFLAGS = 		-Wall -Wextra -Werror -std=c++98

RM = 			rm -f

NAME = 			Polymorphism

SRC =	main.cpp \
		Polymorphism.cpp

Polymorphism:	
				${CPP} ${SRC} ${CPPFLAGS} -o ${NAME}

all : 			$(NAME)                                                    

re : 		fclean Polymorphism	

clean:
			$(RM) Polymorphism

fclean: 	clean
				@$(RM) $(NAME)
