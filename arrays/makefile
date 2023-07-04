include ./outfile
objects = $(output).o

$(output) : $(objects) 
	cc -o $(output) $(objects) 

run :
	@./$(output)

clean :
	@echo "removing compiled and linked files ..."
	@rm $(output) $(objects)
