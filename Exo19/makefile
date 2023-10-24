all: main

fonction.o: fonction.h fonction.c
	gcc -Wall -c fonction.c -lm

main: fonction.o main.c
	gcc -Wall -o main fonction.o main.c -lm