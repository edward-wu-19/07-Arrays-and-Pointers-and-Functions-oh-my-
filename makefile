all: main.o
	gcc -o main main.o

work06.o: main.c
	gcc -c main.c

clean:
	rm -rf main main.o

run:
	./main