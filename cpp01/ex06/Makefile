
CPP = 			c++

CPPFLAGS = 		-Wall -Wextra -Werror -std=c++98

RM = 			rm -f

NAME =          harlFilter

SRC =	main.cpp \
		harlFilter.cpp

harlFilter:	
				${CPP} ${SRC} ${CPPFLAGS} -o ${NAME}

all : 			$(NAME)                                                    

re : 		fclean harlFilter	

clean:
			$(RM) harlFilter

fclean: 	clean
				@$(RM) $(NAME)
