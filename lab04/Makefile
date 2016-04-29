sources = zad1.c zad1_with_complexh.c zad2.c

programs = $(basename $(sources))
objects = $(addsuffix .o, $(programs))

CC = gcc
CFLAGS = -Wall -std=c99 -D_GNU_SOURCE
LDLIBS = -lm

all : $(programs)
