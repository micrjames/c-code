include ./outfile

helpers = $(util_funcs).c $(target).h
objects = $(target).o $(util_funcs).o

$(target) : $(objects)
	cc -o $(target) $(objects) 

$(util_funcs).o : $(helpers)
	cc -c $(util_funcs).c

run :
	@./$(target)

clean :
	@echo "removing compiled and linked files ..."
	@rm $(target) $(objects)
