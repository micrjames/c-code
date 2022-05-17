include makeinc
CC=gcc
CFLAGS=-I.

%.o: %.c %.h 
	@echo 'Building...'
	$(CC) -c -o $@ $< $(CFLAGS)
$(OUT): $(OBJ) 
	$(CC) -o $@ $^ $(CFLAGS)
clean:
	@rm -f *.o $(OUT)
	@echo 'Cleaning build...'
run:
	@./$(OUT)
