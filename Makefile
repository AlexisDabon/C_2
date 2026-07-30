CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c11

SRCS = 01_verif_code.c \
       02_controle.c \
       03_retrait.c \
       04_caisse.c \
       05_atm.c

EXECS = $(SRCS:.c=)

all: $(EXECS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXECS)

re: clean all

.PHONY: all clean re
