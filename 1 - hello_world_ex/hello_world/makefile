include ./defnfile

$(target) : $(object_file)
	cc -o $(target) $(object_file) $(libs)
ifdef util_funcs
	$(util_funcs).o : $(helpers)
endif
run :
	@./$(target)

clean :
	@echo "removing compiled and linked files ..."
	@rm $(target) $(object_file)
