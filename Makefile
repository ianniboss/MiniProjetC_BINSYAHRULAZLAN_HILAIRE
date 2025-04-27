# Nom de l'exécutable
EXEC = mini_projet

# Fichiers sources
SRCS = main.c chiffrement.c
OBJS = $(SRCS:.c=.o)
DEPS = $(OBJS:.o=.d)

# Options de compilation
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -MMD

# Règles
all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

-include $(DEPS)

clean:
	rm -f *.o *.d $(EXEC)

fclean: clean
	rm -f $(EXEC)

re: fclean all
