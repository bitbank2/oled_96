CFLAGS=-c -Wall -O2
LIBS = -lm -lpthread

all: liboled96.a

liboled96.a: fonts.o oled96.o
	ar -rc liboled96.a oled96.o fonts.o

oled96.o: oled96.c
	$(CC) $(CFLAGS) oled96.c

fonts.o: fonts.c
	$(CC) $(CFLAGS) fonts.c

clean:
	rm -rf *o liboled.a
