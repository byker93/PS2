CC= gcc
CFLAGS= -std=c11 -Wall -Werror
CLINK= -lm

all: clean ps2 test

ps2: main.o playfair.o bmp.o
	$(CC) $(CFLAGS) $< -o $@ $(CLINK)
	
main.o: main.c
	$(CC) $(CFLAGS) $< -c $(CLINK)
	
playfair.o: playfair.c playfair.h
	$(CC) $(CFLAGS) $< -c $(CLINK)

bmp.o: bmp.c bmp.h
	$(CC) $(CFLAGS) $< -c $(CLINK)
	
test_playfair: test_playfair.c playfair.o
	$(CC) $(CFLAGS) $< -c $(CLINK)

test: test_bmp.c bmp.o
	$(CC) $(CFLAGS) $< -o $@ $(CLINK)
	./test
	

debug:clean
	$(CC) $(CFLAGS) -g -o ps2 main.c
stable:clean all

clean:
	rm -vfr *~ ps2 *.o test
