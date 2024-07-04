CC = gcc -Wall
RM = rm -f
LDFLAGS = -lm
SRC = $(wildcard *.c)
HEAD = $(wildcard *.h)
OBJ = $(SRC:.c=.o)
PROG = valeurPi

all: $(PROG)

$(PROG): $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c $(HEAD)
	$(CC)  -c $< -o $@

clean:
	$(RM) $(OBJ) $(PROG)
