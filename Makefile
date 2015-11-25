CC = 						gcc
CFLAG = 					
NAME = 						
OBJECTS =  				    $(shell find objects/ -type f)
SOURCES = 					$(shell find ./*.c -type f)

all: COMPILE

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

OBJECTS_MAKE:
	gcc -c $(SOURCES) $(CFLAG) && mv $(addsuffix .o, $(basename $(notdir $(SOURCES)))) objects/

COMPILE:
	gcc *.c -lft -L./libs -I./includes
