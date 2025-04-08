CPP = 			c++

CPPFLAGS = 		-Wall -Wextra -Werror -std=c++98

RM = 			rm -f

NAME = 			Polymorphism

SRC =	src/main.cpp \
		src/Animal.class.cpp \
		src/Cat.class.cpp \
		src/Dog.class.cpp \
		src/WrongAnimal.class.cpp \
		src/WrongCat.class.cpp \
		src/Brain.class.cpp \

Polymorphism:	
				${CPP} ${SRC} ${CPPFLAGS} -o ${NAME}

all : 			$(NAME)                                                    

re : 		fclean Polymorphism	

clean:
			$(RM) Polymorphism

fclean: 	clean
				@$(RM) $(NAME)
