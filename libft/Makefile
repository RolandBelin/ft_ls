CC = 						gcc
CFLAG = 					-Wall -Wextra -Werror
NAME = 						libft.a
OBJECTS =  				    $(shell find objects/ -type f)
SOURCES = 					$(shell find ./*.c -type f)

all: $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

OBJECTS_MAKE:
	gcc -c $(SOURCES) $(CFLAG) && mv $(addsuffix .o, $(basename $(notdir $(SOURCES)))) objects/

$(NAME): OBJECTS_MAKE
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)
