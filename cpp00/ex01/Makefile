
CPP = 			c++

CPPFLAGS = 		-Wall -Wextra -Werror -std=c++98

RM = 			rm -f

NAME = 			MyAwesomePhoneBook

SRC =	main.cpp \
		PhoneBook.class.cpp \
		Contact.class.cpp 


megaphone:	
				${CPP} ${SRC} ${CPPFLAGS} -o ${NAME}

all : 			$(NAME)                                                    

re : 		fclean MyAwesomePhoneBook	

clean:
			$(RM) MyAwesomePhoneBook

fclean: 	clean
				@$(RM) $(NAME)
