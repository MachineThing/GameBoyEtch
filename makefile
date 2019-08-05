CC = lcc
CFLAGS = -v

main:
	$(CC) $(CFLAGS) -o game.gb src/main.c
