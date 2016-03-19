CC= gcc
CFLAGS= -std=c11 -Wall -Werror
CLINK= -lm

all: clean ps2 test

ps2: main.o playfair.o bmp.o
	$(CC) $(CFLAGS) $< -o $@ $(CLINK)
	
main.o: main.c
	cppcheck --enable=performance,unusedFunction --error-exitcode=1 $<
	$(CC) $(CFLAGS) $< -c $(CLINK)
	
	
playfair.o: playfair.c playfair.h
	cppcheck --enable=performance,unusedFunction --error-exitcode=1 $<
	$(CC) $(CFLAGS) $< -c $(CLINK)
	

bmp.o: bmp.c bmp.h
	cppcheck --enable=performance,unusedFunction --error-exitcode=1 $<
	$(CC) $(CFLAGS) $< -c $(CLINK)
	

test: test_bmp.c bmp.o
	cppcheck --enable=performance,unusedFunction --error-exitcode=1 $<
	$(CC) $(CFLAGS) $< -o $@ $(CLINK)
	./test
	

debug:clean
	$(CC) $(CFLAGS) -g -o ps2 main.c
stable:clean all

clean:
	rm -vfr *~ ps2 *.o test
