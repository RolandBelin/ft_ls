CC =						gcc
CFLAG = 					
NAME =						
OBJECTS =					$(shell find objects/ -type f)
SOURCES =					$(shell find source/ -type f)

all: COMPILE

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

OBJECTS_MAKE:
	gcc -c $(SOURCES) $(CFLAG) -I./includes/

COMPILE: OBJECTS_MAKE
	gcc *.o -lft -L./libs
