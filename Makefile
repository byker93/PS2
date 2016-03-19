CC=gcc
CFLAGS="-Wall"

debug:clean
	$(CC) $(CFLAGS) -g -o ps2 main.c
stable:clean
	$(CC) $(CFLAGS) -o ps2 main.c
clean:
	rm -vfr *~ ps2
