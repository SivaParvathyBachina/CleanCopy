CC = gcc

SRCDIRECTORY = src
TARGET = ass1 prob4 prob1 prob5 prob6 prob7 prob8
all: $(TARGET)

ass1: $(SRCDIRECTORY)/forkmain.c
	$(CC) -o ass1 $<

prob1: $(SRCDIRECTORY)/prob1.c
	$(CC) -o prob1 $<

prob4: $(SRCDIRECTORY)/prob4.c
	$(CC) -o prob4 $<

prob5: $(SRCDIRECTORY)/prob5.c
	$(CC) -o prob5 $<

prob6: $(SRCDIRECTORY)/prob6.c
	$(CC) -o prob6 $<

prob7: $(SRCDIRECTORY)/prob7.c
	$(CC) -o prob7 $<

prob8: $(SRCDIRECTORY)/prob8.c
	$(CC) -o prob8 $<

clean:
	/bin/rm -f *.o $(TARGET)
