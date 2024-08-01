output = greeting
objects = $(output).o utils.o

$(output) : $(objects)
	cc -o $(output) $(objects) 

utils.o : utils.c utils.h
	cc -c utils.c

clean :
	@echo "removing compiled and linked files ..."
	@rm $(output) $(objects) 
