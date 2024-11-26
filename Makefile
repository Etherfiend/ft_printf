NAME = libftprintf.a
CC = CC
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs

SRCS = src/printf.c \
	   src/csp.c \
	   src/diu.c \
	   src/xXP.c \
	   utils/put.c

