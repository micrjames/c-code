hello : hello.o hello_funcs.o
	cc -o hello hello.o hello_funcs.o

hello_funcs.o : hello_funcs.c hello.h
	cc -c hello_funcs.c

clean :
	@echo "removing compiled and linked files ..."
	@rm hello hello.o hello_funcs.o
