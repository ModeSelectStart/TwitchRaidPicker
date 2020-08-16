CC=gcc
CFLAGS=-L/usr/local/lib -lcurl

twitchapp: raidsearch.o
	$(CC) -o twitchapp raidsearch.o $(CFLAGS)
