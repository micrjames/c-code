include ./outfile

ifdef util_funcs
helpers = $(util_funcs).c $(target).h
objects = $(target).o $(util_funcs).o

$(target) : $(objects)
	cc -o $(target) $(objects) 
$(util_funcs).o : $(helpers)
	cc -c $(util_funcs).c
else
$(target) : $(target).o
	cc -o $(target) $(target).o 
endif
run :
	@./$(target)

clean :
	@echo "removing compiled and linked files ..."
ifdef util_funcs
	@rm $(target) $(objects)
else
	@rm $(target) $(target).o
endif
