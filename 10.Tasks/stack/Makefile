all: stack
	./stack

stack: main.o stack.o
	gcc -o stack main.o stack.o 

main.o: main.c 
	gcc -c main.c -o main.o 

stack.o: stack.c
	gcc -c stack.c -o stack.o 

clean:
	rm -fr *.o stack
